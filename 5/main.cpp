#include "card_stack_iterator.hpp"
#include <iostream>

auto main() -> int32_t {
    CardStack deck = CardStack::create_seven_to_ace_deck();

    deck.shuffle();

    CardStackIterator it(&deck);

    while (it.has_next()) {
        auto card = it.next();

        if (!card.has_value())
            break;

        std::cout << card->to_string() << '\n';
    }
}
