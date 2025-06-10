#include "logger.h"
#include <iostream>

Logger* Logger::instance = nullptr;
std::mutex Logger::mtx;

Logger::Logger() {}

Logger* Logger::getInstance() {
    std::lock_guard<std::mutex> lock(mtx);
    if (instance == nullptr) {
        instance = new Logger();
    }
    return instance;
}

void Logger::log(const std::string& message) {
    std::cout << "[LOG]: " << message << std::endl;
}