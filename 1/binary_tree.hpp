#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

#include <iostream>
#include <memory>

template <typename T> class BinaryTree {
  private:
    T element;
    std::unique_ptr<BinaryTree<T>> l, r;

  public:
    explicit BinaryTree(T root) : element(root), l(nullptr), r(nullptr) {}

    auto get_element() const -> T { return this->element; }

    auto get_left() const -> BinaryTree<T>* { return this->l.get(); }
    auto get_right() const -> BinaryTree<T>* { return this->r.get(); }

    auto push(T el) -> BinaryTree<T>* {
        if (el >= this->element) {
            if (this->r == nullptr)
                this->r = std::make_unique<BinaryTree<T>>(el);
            else
                this->r->push(el);

            return this->r.get();
        }

        if (this->l == nullptr)
            this->l = std::make_unique<BinaryTree<T>>(el);
        else
            this->l->push(el);

        return this->l.get();
    }

    auto print(size_t depth = 0) const -> void {
        std::cout << this->element << std::endl;

        std::cout << "L: depth: " << depth << ", value: ";
        if (this->l == nullptr)
            std::cout << "empty" << std::endl;
        else
            this->l->print(++depth);

        std::cout << "R: ";
        if (this->r == nullptr)
            std::cout << "empty" << std::endl;
        else
            this->r->print(++depth);
    }
};

#endif
