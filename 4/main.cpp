#include "dynamic_array.hpp"

auto main() -> int {
    auto arr = DynamicArray(2);
    arr.push(0);
    arr.push(1);
    arr.push(2);
    arr.push(3);

    arr.remove_at(2);

    arr.print();
}
