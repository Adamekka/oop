#include "set.hpp"
#include <cassert>
#include <iostream>

auto main() -> int {
    Set first(3);

    {
        auto result1 = first.insert(1);
        auto result2 = first.insert(2);
        auto result3 = first.insert(3);

        assert(
            result1.has_value() && result2.has_value() && result3.has_value()
        );
    }

    Set second(3);

    {
        auto result1 = second.insert(3);
        auto result2 = second.insert(4);
        auto result3 = second.insert(5);

        assert(
            result1.has_value() && result2.has_value() && result3.has_value()
        );
    }

    Set merge = first.merge(second);
    for (size_t i = 0; i < merge.get_len(); i++) {
        auto el = merge.get_at(i);
        assert(el.has_value());
        std::cout << *el << " ";
    }

    std::cout << "\n";

    Set complement = first.complement(second);
    for (size_t i = 0; i < complement.get_len(); i++) {
        auto el = complement.get_at(i);
        assert(el.has_value());
        std::cout << *el << " ";
    }

    std::cout << "\n";
}
