#include <algorithm>

#include "hero.hpp"

Hero::Hero(double hp, double base_damage, size_t mana, size_t armor)
    : Sprite(hp, base_damage), mana(mana), armor(armor) {}

auto Hero::get_hit(double damage) -> bool {
    damage -= static_cast<double>(this->armor);

    damage = std::max(damage, 0.0);

    this->hp -= damage;

    return is_alive();
}

auto Hero::cast_spell(Sprite& target_sprite) -> bool {
    bool kill = false;

    if (this->mana > 0) {
        kill = target_sprite.get_hit(2 * base_damage);
        this->mana--;
    }

    return kill;
}
