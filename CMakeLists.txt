project(millipede-cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pedantic -Wall -Wextra")

add_executable(${PROJECT_NAME} millipede.cpp)
