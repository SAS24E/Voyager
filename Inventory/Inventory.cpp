#include "Inventory.h"
#include <iostream>
#include <algorithm>

void Inventory::addItem(const std::string& item){
    items.push_back(item);
    std::cout << item << " was added to your inventory." << std::endl;
}

void Inventory::removeItem(const std::string& item){
    items.erase(std::find(items.begin(), items.end(), item));
    std::cout << item << " was removed from your inventory." << std::endl;
}

void Inventory::showInventory(){
    for(int i = 0; i < items.size(); i++){
        std::cout << items[i] << std::endl;
    }
}