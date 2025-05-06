#include "armor.hpp"
#include "hero.hpp"
#include "weapon.hpp"
#include <cstdint>

auto main() -> int32_t {
    Hero hero;

    auto& inventory = hero.get_inventory();
    inventory.items.emplace_back(std::make_unique<Weapon>("Sword", 10));
    inventory.items.emplace_back(std::make_unique<Armor>("Shield", 5));

    inventory.print_all_items();
}
