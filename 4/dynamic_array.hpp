#ifndef DYNAMIC_ARRAY_HPP
#define DYNAMIC_ARRAY_HPP

#include <cstddef>
#include <cstdint>

class DynamicArray {
  private:
    int32_t* arr;
    size_t len = 0;
    size_t capacity;

  public:
    DynamicArray();
    explicit DynamicArray(size_t capacity);
    DynamicArray(const int32_t* arr, size_t len);
    DynamicArray(const DynamicArray&) = default;
    DynamicArray(DynamicArray&&) noexcept = default;

    ~DynamicArray();

    auto operator=(const DynamicArray&) -> DynamicArray& = default;
    auto operator=(DynamicArray&&) noexcept -> DynamicArray& = default;

    auto realloc() -> void;
    auto realloc(size_t capacity) -> void;

    auto push(int32_t el) -> void;

    auto remove_at(size_t index) -> void;

    auto print() -> void;
};

#endif
