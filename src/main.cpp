#include "logger.h"

int main() {
    Logger* logger1 = Logger::getInstance();
    Logger* logger2 = Logger::getInstance();

    logger1->log("Message from logger1");
    logger2->log("Message from logger2");

    if (logger1 == logger2) {
        logger1->log("Singleton works: Both instances are the same.");
    } else {
        logger1->log("Singleton failed: Instances are different.");
    }

    return 0;
}