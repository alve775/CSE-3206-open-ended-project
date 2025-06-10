#include "logger.h"
#include <gtest/gtest.h>

TEST(LoggerTest, SameInstance) {
    Logger* a = Logger::getInstance();
    Logger* b = Logger::getInstance();
    EXPECT_EQ(a, b);
}

TEST(LoggerTest, LogFunctionDoesNotCrash) {
    Logger::getInstance()->log("GTest logging test.");
    SUCCEED(); // no crash = success
}