#ifndef CARD_STACK_ITERATOR_HPP
#define CARD_STACK_ITERATOR_HPP

#include "card_stack.hpp"
#include <optional>

class CardStackIterator {
  private:
    CardStack* card_stack;
    size_t index = 0;

  public:
    explicit CardStackIterator(CardStack* card_stack);

    [[nodiscard]] auto has_next() const -> bool;
    [[nodiscard]] auto next() -> std::optional<Card>;
    [[nodiscard]] auto unsafe_next() -> Card;
};

#endif
