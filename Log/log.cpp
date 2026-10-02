#include "log.h"

void Log::log(const std::string &message)
{
    std::cout << message << std::endl;
}

void Log::setLevel(Level logLevel)
{
    m_loglevel = logLevel;
}

void Log::warn(const std::string &message)
{
    if (m_loglevel >= LevelWarning)
        std::cout << "[WARNING]: " << message << std::endl;
}

void Log::error(const std::string &message)
{
    if (m_loglevel >= LevelError)
        std::cout << "[ERROR]: " << message << std::endl;
}

void Log::info(const std::string &message)
{
    if (m_loglevel >= LevelInfo)
        std::cout << "[INFO]: " << message << std::endl;
}
