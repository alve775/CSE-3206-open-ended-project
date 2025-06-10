#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <mutex>

class Logger {
private:
    static Logger* instance;
    static std::mutex mtx;

    Logger();  // private constructor

public:
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    static Logger* getInstance();
    void log(const std::string& message);
};

#endif