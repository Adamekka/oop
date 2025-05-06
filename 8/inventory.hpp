#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "item.hpp"
#include <vector>

class Inventory {
  public:
    std::vector<std::unique_ptr<Item>> items;

    Inventory() = default;

    auto print_all_items() const -> void;
};

#endif
