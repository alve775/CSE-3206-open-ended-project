# Adjust GTest path if needed (from brew info googletest)
set(GTEST_ROOT /opt/homebrew/opt/googletest)

# Include headers
include_directories(${GTEST_ROOT}/include ../include)
link_directories(${GTEST_ROOT}/lib)

# Create test executable
add_executable(logger_test logger_test.cpp ../src/logger.cpp)

# Link with GTest and pthread
target_link_libraries(logger_test gtest gtest_main pthread)

# Register tests
add_test(NAME LoggerTest COMMAND logger_test)