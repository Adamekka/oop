#include "sprite.hpp"
#include <iostream>

Sprite::Sprite(double hp, double base_damage)
    : hp(hp), base_damage(base_damage) {}

auto Sprite::attack(Sprite& target_sprite) const -> void {
    bool is_alive = target_sprite.get_hit(this->base_damage);

    if (!is_alive)
        std::cout << "Enemy sprite has been killed" << '\n';
}

auto Sprite::get_hit(double damage) -> bool {
    this->hp -= damage;
    std::cout << "Sprite's HP was reduced by " << damage << '\n';

    return is_alive();
}

auto Sprite::is_alive() const -> bool { return this->hp > 0; }
