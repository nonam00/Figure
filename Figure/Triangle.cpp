#include "Triangle.h"

Triangle::Triangle() : Triangle(0, 0) {}

Triangle::Triangle(int _base, int _altitude) : base{ _base }, altitude{ _altitude } {}

void Triangle::Draw() { std::cout << "Triangle" << std::endl; }

//S=основание*высота проведённая к основанию/2
int Triangle::Square() { return ((base * altitude) / 2); }

void Triangle::set_base(int _base) { base = _base; }

void Triangle::set_altitude(int _altitide) { altitude = _altitide; }
