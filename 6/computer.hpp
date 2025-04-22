#ifndef COMPUTER_HPP
#define COMPUTER_HPP

#include "electronics.hpp"
#include <string>

class Computer final : public Electronics {
  private:
    std::string cpu;
    std::string gpu;
    size_t memory_gb;

  public:
    Computer(std::string cpu, std::string gpu, size_t memory_gb);

    auto print_parameters() const -> void final;
};

#endif
