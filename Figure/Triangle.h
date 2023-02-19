#pragma once

#include "Figure.h"

class Triangle : Figure
{

public:

	Triangle();
	Triangle(int _base, int _altitude);

	void Draw() override;
	int Square() override;

	void set_base(int _base);
	void set_altitude(int _altitide);

protected:

	int base;
	int altitude;
};

