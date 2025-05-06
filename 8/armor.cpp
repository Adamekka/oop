#include "armor.hpp"
#include <string>

Armor::Armor(std::string_view name, size_t defense)
    : Item(name), defense(defense) {}

auto Armor::to_string() const -> std::string {
    return "Name: " + std::string(this->name)
         + ", Defense: " + std::to_string(this->defense);
}
