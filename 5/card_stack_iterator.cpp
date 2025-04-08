#include "card_stack_iterator.hpp"

CardStackIterator::CardStackIterator(CardStack* card_stack)
    : card_stack(card_stack) {}

auto CardStackIterator::has_next() const -> bool {
    return this->index < this->card_stack->cards.size();
}

auto CardStackIterator::next() -> std::optional<Card> {
    if (!has_next())
        return std::nullopt;

    return this->card_stack->cards[this->index++];
}

auto CardStackIterator::unsafe_next() -> Card {
    return this->card_stack->cards[this->index++];
}
