#ifndef ELECTRONICS_HPP
#define ELECTRONICS_HPP

class Electronics {
  protected:
    Electronics() = default;

  public:
    virtual ~Electronics() = default;

    virtual auto print_parameters() const -> void = 0;
};

#endif
