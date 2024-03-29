#ifndef DUNGEONS_AND_DRAGONS_ITEM_HPP
#define DUNGEONS_AND_DRAGONS_ITEM_HPP

#include <string>
#include <iostream>
#include "ItemType.hpp"

class Item
{
private:
    std::string name;
    ItemType itemType;
    unsigned int modifier;

    void handleNothing();

public:
    Item() = default;

    Item(const std::string& _name, const ItemType& _itemType, unsigned int _modifier);

    [[nodiscard]] std::string getName() const;

    [[nodiscard]] ItemType getItemType() const;

    [[nodiscard]] unsigned int getModifier() const;
};

std::ostream& operator<<(std::ostream& os, const Item& item);

std::istream& operator>>(std::istream& is, Item& item);
#endif //DUNGEONS_AND_DRAGONS_ITEM_HPP
