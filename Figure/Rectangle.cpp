#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle(0, 0) {}

Rectangle::Rectangle(int _a, int _b) : a{ _a }, b{ _b } {}

void Rectangle::Draw() { std::cout << "Rectanle" << std::endl; }

int Rectangle::Square() { return a * b; }

void Rectangle::set_a(int _a) { a = _a; }

void Rectangle::set_b(int _b) { b = _b; }
