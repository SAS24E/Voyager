#include "log.h"

void  Log::log(const std::string &message)
{
    for (char c : message)
    {
        std::cout << c << std::flush;
        if (c == '.' || c == '!' || c == '?')
        {
            // Add a longer delay after punctuation
            std::this_thread::sleep_for(std::chrono::milliseconds(Log::msDelay * 8));
        }
        else if (c == ',' || c == ';' || c == ':')
        // medium pause for commas, semicolons, and colons
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(Log::msDelay * 4));
        }
        else
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(Log::msDelay * 2));
        }
    }
    std::cout << std::endl;
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
