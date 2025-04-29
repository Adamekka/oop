#include "monster.hpp"

Monster::Monster(double hp, double base_damage, double damage_boost)
    : Sprite(hp, base_damage), damage_boost(damage_boost),
      loot_items({Loot::Gold, Loot::Weapon, Loot::Armor}) {}

auto Monster::attack(Sprite& target_sprite) const -> void {
    target_sprite.get_hit(base_damage + damage_boost);
}

auto Monster::loot() -> std::vector<Loot> { return this->loot_items; }
