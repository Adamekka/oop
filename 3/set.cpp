#include "set.hpp"
#include <algorithm>
#include <cassert>

Set::Set(size_t capacity) : arr(new size_t[capacity]), capacity(capacity) {}

Set::~Set() { delete[] this->arr; }

auto Set::get_len() const -> size_t { return this->len; }

auto Set::get_capacity() const -> size_t { return this->capacity; }

auto Set::get_at(size_t index) const -> std::optional<size_t> {
    if (index < this->len)
        return this->arr[index];

    return std::nullopt;
}

auto Set::contains(size_t el) const -> bool {
    for (size_t i = 0; i < this->len; i++)
        if (this->arr[i] == el)
            return true;

    return false;
}

auto Set::insert(size_t new_el) -> std::expected<void, InsertResult> {
    if (this->len >= this->capacity)
        return std::unexpected(InsertResult::ArrayIsFull);

    if (this->contains(new_el))
        return std::unexpected(InsertResult::ElementAlreadyExists);

    this->arr[this->len++] = new_el;
    return {};
}

auto Set::merge(const Set& second_set) const -> Set {
    size_t len = std::max(this->len, second_set.len);
    Set merge(len);

    for (size_t i = 0; i < len; i++) {
        auto first_el = this->get_at(i);

        if (first_el.has_value())
            (void)merge.insert(*first_el);

        auto second_el = second_set.get_at(i);

        if (second_el.has_value() && first_el != second_el)
            (void)merge.insert(*second_el);
    }

    return merge;
}

auto Set::complement(const Set& second_set) const -> Set {
    size_t len = std::max(this->len, second_set.len);
    Set complement(len);

    for (size_t i = 0; i < len; i++) {
        auto first_el = this->get_at(i);

        if (!first_el.has_value() || !second_set.contains(*first_el))
            continue;

        auto result = complement.insert(*first_el);
        assert(result.has_value());
    }

    return complement;
}
