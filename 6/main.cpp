#include "computer.hpp"
#include "phone.hpp"
#include "tv.hpp"
#include <vector>

auto main() -> int32_t {
    auto phone = std::make_unique<Phone>("iPhone", "16", 60);
    auto computer = std::make_unique<Computer>("Intel", "Nvidia", 16);
    auto tv = std::make_unique<TV>("Samsung", 1920, 1080);

    std::vector<std::unique_ptr<Electronics>> electronics;
    electronics.reserve(3);
    electronics.push_back(std::move(phone));
    electronics.push_back(std::move(computer));
    electronics.push_back(std::move(tv));

    for (const auto& el : electronics)
        el->print_parameters();
}
