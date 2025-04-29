#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "loot.hpp"
#include "sprite.hpp"
#include <vector>

class Monster : public Sprite {
  private:
    double damage_boost;
    std::vector<Loot> loot_items;

  public:
    Monster(double hp, double base_damage, double damage_boost);

    auto attack(Sprite& target_sprite) const -> void final;

    auto loot() -> std::vector<Loot>;
};

#endif
