#pragma once
#include <vector>
#include <string>

class Inventory{

    private:
    std::vector<std::string> items;
    int maxSlot;

    public:
    Inventory() : maxSlot(5){}
    
    void addItem(const std::string& item); 
    void removeItem(const std::string& item);
    void showInventory();
    
};