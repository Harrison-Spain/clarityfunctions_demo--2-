cmake_minimum_required(VERSION 3.11)
project("clarityfunctions"
    VERSION 0.0.1
    DESCRIPTION "Project to be used for demonstration for python cpp interface frameworks."
    LANGUAGES CXX
    )

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 11)

set(LIB_NAME clarityfunctions)
set(DEMO_EXECUTABLE clarityfunctions_demo)

set(HEADER_FILES "clarityfunctions.h")
set(IMPLEMENTATION_FILES "clarityfunctions.cpp")
set(TEST_FILES "clarityfunctions_demo.cpp")

add_library(${LIB_NAME} SHARED) # we will create a shared library
target_sources(${LIB_NAME} PRIVATE ${HEADER_FILES} ${IMPLEMENTATION_FILES} ) #adding the source files to the target

# This theoretically is not necessary, I am creating it simply, to show how to create an executable 
# that uses the shared library generated due to the above commands.
add_executable(${DEMO_EXECUTABLE} ${TEST_FILES}) # creating an executable as a demo
target_link_libraries(${DEMO_EXECUTABLE} ${LIB_NAME}) # linking the shared library to the executable