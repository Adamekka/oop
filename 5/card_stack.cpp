#include "card_stack.hpp"
#include <algorithm>
#include <random>

CardStack::CardStack() { this->cards.reserve(CARD_DECK_SIZE); }

auto CardStack::shuffle() -> void {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

auto CardStack::create_seven_to_ace_deck() -> CardStack {
    CardStack deck;

    for (auto suit : Card::SUIT_ALL_CASES)
        for (auto rank : Card::RANK_ALL_CASES)
            deck.cards.emplace_back(suit, rank);

    return deck;
}
