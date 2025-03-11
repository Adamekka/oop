#include "classroom.hpp"
#include <iostream>

auto Classroom::print_students_with_scholarship() const -> void {
    for (const auto& student : this->students) {
        auto result = student.get_grades_avg();

        if (result.can_get_scholarship && result.value < 1.7)
            std::cout << student.first_name + " " + student.last_name + "\n";
    }
}
