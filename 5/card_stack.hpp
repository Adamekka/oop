#ifndef CARD_STACK_HPP
#define CARD_STACK_HPP

#include "card.hpp"
#include <vector>

class CardStack {
  public:
    std::vector<Card> cards;

    constexpr static size_t CARD_DECK_SIZE
        = Card::SUIT_ALL_CASES.size() * Card::RANK_ALL_CASES.size();

    CardStack();

    auto shuffle() -> void;

    static auto create_seven_to_ace_deck() -> CardStack;
};

#endif
