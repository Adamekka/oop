#ifndef ITEM_HPP
#define ITEM_HPP

#include <string_view>

class Item {
  protected:
    std::string_view name;

    explicit Item(std::string_view name);

  public:
    virtual ~Item() = default;

    [[nodiscard]] virtual auto to_string() const -> std::string = 0;
};

#endif
