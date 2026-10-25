#pragma once
#include <string>
#include <iostream>
#include <vector>

class Observer{
    public:
       virtual ~Observer() = default;
       virtual void onPlayerEvent(const std::string &message) = 0;
};