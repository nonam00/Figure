#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{

	bool flag = true;
	while (flag)
	{

		Rectangle rectangle;
		Triangle triangle;
		Circle circle;

		int choice;
		std::cout << "1 - Rectangle\n2 - Triangle\n3 - Circle\n0 - Exit\n\n";
		std::cin >> choice; std::cout << std::endl;

		switch (choice)
		{
		case 0:
			flag = false;
			break;
		case 1:
			int side1, side2;

			std::cout << "First side: ";
			std::cin >> side1; std::cout << std::endl;

			std::cout << "Second side: ";
			std::cin >> side2; std::cout << std::endl;

			rectangle.set_a(side1);
			rectangle.set_b(side2);

			rectangle.Draw();

			std::cout << rectangle.Square() << std::endl;

			break;
		case 2:
			int a, h;

			std::cout << "Base: ";
			std::cin >> a; std::cout << std::endl;

			std::cout << "altitude: ";
			std::cin >> h; std::cout << std::endl;

			triangle.set_base(a);
			triangle.set_altitude(h);

			triangle.Draw();
			std::cout << triangle.Square() << std::endl;

			break;
		case 3:
			float radius;
			std::cout << "Radius: ";
			std::cin >> radius; std::cout << std::endl;

			circle.set_radius(radius);

			circle.Draw();
			std::cout << circle.Square() << std::endl;

			break;

		default:
			break;
		}
		std::cout << std::endl;
	}
	return 0;
}