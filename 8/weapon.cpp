#include "weapon.hpp"
#include <string>

Weapon::Weapon(std::string_view name, size_t damage)
    : Item(name), damage(damage) {}

auto Weapon::to_string() const -> std::string {
    return "Name: " + std::string(this->name)
         + ", Damage: " + std::to_string(this->damage);
}
