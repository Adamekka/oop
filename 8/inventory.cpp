#include "inventory.hpp"
#include <iostream>

auto Inventory::print_all_items() const -> void {
    for (const auto& item : this->items)
        std::cout << item->to_string() << '\n';
}
