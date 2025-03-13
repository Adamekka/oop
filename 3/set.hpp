#ifndef SET_HPP
#define SET_HPP

#include <expected>
#include <optional>

class Set {
  private:
    size_t* arr;
    size_t len = 0;
    size_t capacity;

  public:
    explicit Set(size_t capacity);
    Set(const Set&) = default;
    Set(Set&&) noexcept = default;

    ~Set();

    auto operator=(const Set&) -> Set& = default;
    auto operator=(Set&&) noexcept -> Set& = default;

    [[nodiscard]] auto get_len() const -> size_t;
    [[nodiscard]] auto get_capacity() const -> size_t;
    [[nodiscard]] auto get_at(size_t index) const -> std::optional<size_t>;

    [[nodiscard]] auto contains(size_t el) const -> bool;

    enum class InsertResult : uint8_t { ElementAlreadyExists, ArrayIsFull };
    auto insert(size_t new_el) -> std::expected<void, InsertResult>;

    [[nodiscard]] auto merge(const Set& second_set) const -> Set;
    [[nodiscard]] auto complement(const Set& second_set) const -> Set;
};

#endif
