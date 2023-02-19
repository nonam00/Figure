#pragma once

#include "Figure.h"

class Rectangle : Figure
{

public:

	Rectangle();
	Rectangle(int _a, int _b);

	void Draw() override;
	int Square() override;

	void set_a(int _a);
	void set_b(int _b);

protected:

	int a; 
	int b;

};

