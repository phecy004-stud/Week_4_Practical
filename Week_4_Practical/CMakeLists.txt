# CMakeList.txt : CMake project for Week_4_Practical, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Week_4_Practical "Week_4_Practical.cpp" "Week_4_Practical.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Week_4_Practical PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
