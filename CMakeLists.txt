# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.10)


# Intégration vcpkg pour la compilation Windows/MSYS64.
# CMAKE_TOOLCHAIN_FILE doit être défini avant le premier appel à project().
if(WIN32)
  set(CMAKE_TOOLCHAIN_FILE "C:/msys64/mingw64/bin/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE FILEPATH "Chemin vers le toolchain vcpkg")
  set(VCPKG_TARGET_TRIPLET "x64-mingw-dynamic" CACHE STRING "Triplet vcpkg")
endif()

project ("TP1" C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()


# Include sub-projects.
add_subdirectory ("Exo1")
add_subdirectory ("Exo2")
add_subdirectory ("Exo3")
add_subdirectory ("Exo4")
add_subdirectory ("Exo5")
