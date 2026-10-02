
#include <iostream>
#include <string>
// This is a rather poor class for logging messages with different severity levels.
class Log
{
public:

enum Level {
    LevelError = 0, LevelWarning = 1, LevelInfo = 2
};
    Level m_loglevel = LevelInfo;

private:
    int m_loglevelWarning;

public:
   void log(const std::string& message);
    void setLevel(Level logLevel);
    void warn(const std::string& message);
    void error(const std::string& message);
    void info(const std::string& message);
};