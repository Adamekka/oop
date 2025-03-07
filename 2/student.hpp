#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "grade_avg_result.hpp"
#include "subject.hpp"
#include <string>
#include <unordered_map>
#include <vector>

class Student {
  public:
    std::string first_name;
    std::string last_name;
    std::unordered_map<Subject, std::vector<uint8_t>> grades;

    Student(std::string first_name, std::string last_name);

    auto get_grades_avg() const -> GradeAvgResult<float>;
};

#endif
