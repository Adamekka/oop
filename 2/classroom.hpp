#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

#include "student.hpp"

class Classroom {
  public:
    std::vector<Student> students;

    Classroom() = default;

    auto print_students_with_scholarship() const -> void;
};

#endif
