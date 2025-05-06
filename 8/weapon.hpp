#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "item.hpp"

class Weapon : public Item {
  private:
    size_t damage;

  public:
    Weapon(std::string_view name, size_t damage);

    [[nodiscard]] auto to_string() const -> std::string final;
};

#endif
