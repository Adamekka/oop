#include "dynamic_array.hpp"
#include <iostream>

#define INITIAL_CAPACITY 10

DynamicArray::DynamicArray()
    : arr(new int32_t[INITIAL_CAPACITY]), capacity(INITIAL_CAPACITY) {}

DynamicArray::DynamicArray(size_t capacity)
    : arr(new int32_t[capacity]), capacity(capacity) {}

DynamicArray::DynamicArray(const int32_t* arr, size_t len)
    : arr(new int32_t[len * 2]), len(len), capacity(len * 2) {
    for (size_t i = 0; i < len; i++)
        this->arr[i] = arr[i];
}

DynamicArray::~DynamicArray() { delete[] this->arr; }

auto DynamicArray::realloc() -> void { this->realloc(this->capacity * 2); }

auto DynamicArray::realloc(size_t capacity) -> void {
    auto* new_arr = new int32_t[capacity]; // NOLINT

    for (size_t i = 0; i < this->len; i++)
        new_arr[i] = this->arr[i];

    delete[] this->arr;

    this->arr = new_arr;
    this->capacity = capacity;
}

auto DynamicArray::push(int32_t el) -> void {
    if (this->len >= this->capacity)
        this->realloc();

    this->arr[this->len++] = el;
}

auto DynamicArray::remove_at(size_t index) -> void {
    if (index >= this->len)
        return;

    this->len--;

    for (size_t i = index; i < this->len; i++)
        this->arr[i] = this->arr[i + 1];
}

auto DynamicArray::print() -> void {
    for (size_t i = 0; i < this->len; i++)
        std::cout << this->arr[i] << ' ';

    std::cout << '\n';
}
