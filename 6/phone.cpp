#include "phone.hpp"
#include <iostream>

Phone::Phone(std::string brand, std::string model, uint16_t refresh_rate)
    : brand(std::move(brand)), model(std::move(model)),
      refresh_rate(refresh_rate) {}

auto Phone::print_parameters() const -> void {
    std::cout << "Brand: " << this->brand << ", Model: " << this->model << '\n';
}
