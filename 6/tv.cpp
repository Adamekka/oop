#include "tv.hpp"
#include <iostream>

TV::TV(std::string brand, uint32_t res_x, uint32_t res_y)
    : brand(std::move(brand)), res_x(res_x), res_y(res_y) {}

auto TV::print_parameters() const -> void {
    std::cout << "Brand: " << this->brand << ", Resolution: " << this->res_x
              << 'x' << this->res_y << '\n';
}
