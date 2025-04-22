#include "computer.hpp"
#include <iostream>

Computer::Computer(std::string cpu, std::string gpu, size_t memory_gb)
    : cpu(std::move(cpu)), gpu(std::move(gpu)), memory_gb(memory_gb) {}

auto Computer::print_parameters() const -> void {
    std::cout << "CPU: " << this->cpu << ", GPU: " << this->gpu
              << ", Memory: " << this->memory_gb << "GB\n";
}
