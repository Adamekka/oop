#include "student.hpp"

Student::Student(std::string first_name, std::string last_name)
    : first_name(std::move(first_name)), last_name(std::move(last_name)) {};

auto Student::get_grades_avg() const -> GradeAvgResult<float> {
    uint16_t all_grades_sum = 0;
    uint16_t all_grades_count = 0;
    bool can_get_scholarship = true;

    for (const auto& subject : this->grades) {
        uint16_t grade_sum = 0;
        uint16_t grade_count = 0;

        for (auto grade : subject.second) {
            grade_sum += grade;
            grade_count++;
        }

        if (grade_count == 0)
            continue;

        float grade_avg
            = static_cast<float>(grade_sum) / static_cast<float>(grade_count);

        if (grade_avg < 2) {
            can_get_scholarship = false;
        } else {
            all_grades_sum += grade_sum;
            all_grades_count++;
        }
    }

    float all_grades_avg = static_cast<float>(all_grades_sum)
                         / static_cast<float>(all_grades_count);

    return {all_grades_avg, can_get_scholarship};
}
