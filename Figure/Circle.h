#pragma once

#include "Figure.h"

class Circle : Figure
{

public:

	Circle();
	Circle(float _radius);

	void Draw() override;
	int Square() override;

	void set_radius(float _radius);

protected:
	
	float radius;

};

