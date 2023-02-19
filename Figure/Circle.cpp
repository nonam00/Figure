#include "Circle.h"

Circle::Circle() : Circle(0) {}

Circle::Circle(float _radius) : radius{ _radius } {}

void Circle::Draw() { std::cout << "Circle" << std::endl; }

int Circle::Square() { return (int)(3.14 * (radius * radius)); }

void Circle::set_radius(float _radius) { radius = _radius; }