#ifndef HERO_HPP
#define HERO_HPP

#include "inventory.hpp"

class Hero {
  private:
    Inventory inventory;

  public:
    [[nodiscard]] auto get_inventory() -> Inventory&;
};

#endif
