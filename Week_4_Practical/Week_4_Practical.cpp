// Week_4_Practical.cpp : Defines the entry point for the application.
//

#include "Week_4_Practical.h"
#include <iostream>
#include <list>
#include <set>

using namespace std;



struct ListComparator {
    bool operator()(const std::list<int>& lhs, const std::list<int>& rhs) const {
        return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
    }
};

int main() {

    std::cout << "Please enter a set of numbers (enter '0' to end):\n";

    std::list<int> numbers;
    int num;
    while (std::cin >> num && num != 0) {
        numbers.push_back(num);
    }

    std::set<std::list<int>> n;
    n.insert(numbers);

    std::cout << "Inserted list:\n";

    for (const auto list : n) {
        for (int val : list) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
