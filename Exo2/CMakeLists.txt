# CMakeList.txt : CMake project for Exo1, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Exo2 "Exo2.c")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Exo2 PROPERTY C_STANDARD 99)
endif()

# TODO: Add tests and install targets if needed.
