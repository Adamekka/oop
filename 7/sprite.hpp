#ifndef SPRITE_HPP
#define SPRITE_HPP

class Sprite {
  protected:
    double hp;
    double base_damage;

    Sprite(double hp, double base_damage);

  public:
    virtual ~Sprite() = default;

    virtual auto attack(Sprite& target_sprite) const -> void;
    virtual auto get_hit(double damage) -> bool;

    [[nodiscard]] auto is_alive() const -> bool;
};

#endif
