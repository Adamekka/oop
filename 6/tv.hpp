#ifndef TV_HPP
#define TV_HPP

#include "electronics.hpp"
#include <string>

class TV final : public Electronics {
  private:
    std::string brand;
    uint32_t res_x;
    uint32_t res_y;

  public:
    TV(std::string brand, uint32_t res_x, uint32_t res_y);

    auto print_parameters() const -> void final;
};

#endif
