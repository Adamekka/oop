#ifndef ARMOR_HPP
#define ARMOR_HPP

#include "item.hpp"

class Armor : public Item {
  private:
    size_t defense;

  public:
    Armor(std::string_view name, size_t defense);

    [[nodiscard]] auto to_string() const -> std::string final;
};

#endif
