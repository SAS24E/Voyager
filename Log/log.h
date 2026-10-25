
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "../Observer/Observer.h"

class Log : public Observer
{
public:
    enum Level
    {
        LevelError = 0,
        LevelWarning = 1,
        LevelInfo = 2
    };
    Level m_loglevel = LevelInfo;

private:
    static const int msDelay = 10;

public:
    static void log(const std::string &message);
    void setLevel(Level logLevel);
    void warn(const std::string &message);
    void error(const std::string &message);
    void info(const std::string &message);
    void onPlayerEvent(const std::string &message) override;

};