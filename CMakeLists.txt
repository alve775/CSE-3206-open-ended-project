cmake_minimum_required(VERSION 3.10)
project(SingletonLogger)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(include)

# Add the main executable
add_executable(main src/main.cpp src/logger.cpp)

# Enable testing
enable_testing()
add_subdirectory(test)