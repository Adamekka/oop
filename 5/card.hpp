#ifndef CARD_HPP
#define CARD_HPP

#include <array>
#include <string>

class Card {
  public:
    enum class Suit : uint8_t { Hearts, Diamonds, Clubs, Spades } suit;
    enum class Rank : uint8_t {
        Two = 2,
        Three = 3,
        Four = 4,
        Five = 5,
        Six = 6,
        Seven = 7,
        Eight = 8,
        Nine = 9,
        Ten = 10,
        Jack = 11,
        Queen = 12,
        King = 13,
        Ace = 14
    } rank;

    constexpr static std::array<Suit, 4> SUIT_ALL_CASES
        = {Suit::Hearts, Suit::Diamonds, Suit::Clubs, Suit::Spades};

    constexpr static std::array<Rank, 13> RANK_ALL_CASES = {
      Rank::Two,
      Rank::Three,
      Rank::Four,
      Rank::Five,
      Rank::Six,
      Rank::Seven,
      Rank::Eight,
      Rank::Nine,
      Rank::Ten,
      Rank::Jack,
      Rank::Queen,
      Rank::King,
      Rank::Ace
    };

    [[nodiscard]] auto to_string() const -> std::string;
};

#endif
