#ifndef GRADE_AVG_RESULT
#define GRADE_AVG_RESULT

#include <utility>

template <typename T> class GradeAvgResult {
  public:
    T value;
    bool can_get_scholarship;

    GradeAvgResult(T value, bool can_get_scholarship)
        : value(std::move(value)), can_get_scholarship(can_get_scholarship) {}
};

#endif
