#include "card.hpp"

auto Card::to_string() const -> std::string {
    std::string str;

    switch (this->suit) {
        case Suit::Hearts: str += "Hearts"; break;
        case Suit::Diamonds: str += "Diamonds"; break;
        case Suit::Clubs: str += "Clubs"; break;
        case Suit::Spades: str += "Spades"; break;
    }

    str += " ";

    switch (this->rank) {
        case Rank::Two: str += "2"; break;
        case Rank::Three: str += "3"; break;
        case Rank::Four: str += "4"; break;
        case Rank::Five: str += "5"; break;
        case Rank::Six: str += "6"; break;
        case Rank::Seven: str += "7"; break;
        case Rank::Eight: str += "8"; break;
        case Rank::Nine: str += "9"; break;
        case Rank::Ten: str += "10"; break;
        case Rank::Jack: str += "J"; break;
        case Rank::Queen: str += "Q"; break;
        case Rank::King: str += "K"; break;
        case Rank::Ace: str += "A"; break;
    }

    return str;
}
