cmake_minimum_required(VERSION 3.10)
project(ProblemSolving)
set(CMAKE_CXX_STANDARD 17)

# Find all main.cpp files recursively � one per problem folder
file(GLOB_RECURSE MAIN_FILES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/problems/*/main.cpp")

# Loop over each main.cpp file and create an executable
foreach(main_file ${MAIN_FILES})
    get_filename_component(folder ${main_file} DIRECTORY)        # Get the folder
    get_filename_component(name ${folder} NAME)                  # Use folder name as target name

    # Grab all .cpp and .h in the folder
    file(GLOB_RECURSE sources CONFIGURE_DEPENDS
        "${folder}/*.cpp"
        "${folder}/*.h"
    )

    add_executable(${name}_exec ${sources})
endforeach()
