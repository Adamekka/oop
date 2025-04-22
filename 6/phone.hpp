#ifndef PHONE_HPP
#define PHONE_HPP

#include "electronics.hpp"
#include <string>

class Phone final : public Electronics {
  private:
    std::string brand;
    std::string model;
    uint16_t refresh_rate;

  public:
    Phone(std::string brand, std::string model, uint16_t refresh_rate);

    auto print_parameters() const -> void final;
};

#endif
