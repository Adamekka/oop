#ifndef HERO_HPP
#define HERO_HPP

#include "sprite.hpp"
#include <cstddef>

class Hero : public Sprite {
  private:
    size_t mana;
    size_t armor;

  public:
    Hero(double hp, double base_damage, size_t mana, size_t armor);

    auto get_hit(double damage) -> bool final;

    auto cast_spell(Sprite& target_sprite) -> bool;
};

#endif
