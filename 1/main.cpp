#include "binary_tree.hpp"

auto main() -> int {
    BinaryTree bin_tree(5);
    bin_tree.push(3);
    bin_tree.push(4);
    bin_tree.push(7);
    bin_tree.push(0);

    bin_tree.print();
}
