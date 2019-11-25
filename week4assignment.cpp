//Program outputs the area of different 3d shapes

#include "stdio.h"

void main()
{
	int choice = 0;
	float base = 0;
	float height = 0;
	float area = 0;
	float length = 0;
	float width = 0;
	float radius = 0;
	float angle = 0;

	printf("Area Calculator \n");
	printf("1 <triangle> \n");
	printf("2 <square> \n");
	printf("3 <rectangle> \n");
	printf("4 <parallelogram> \n");
	printf("5 <trapezoid> \n");
	printf("6 <circle> \n");
	printf("7 <ellipse> \n");
	printf("8 <sector> \n");

	start:
	printf("Enter Choice (1-8): ");
	scanf_s("%d", &choice);

	switch(choice)
	{ 
		case 1: printf("Choice is 1 \n");
			
			printf("Enter triangle height: ");
			scanf_s("%f", &height);

			printf("Enter triangle base: ");
			scanf_s("%f", &base);

			area = 0.5 * base * height;

			printf("Triangle area: %.2f \n", area);

			break;

		case 2: printf("Choice is 2 \n");

			printf("Enter length of the square's side: ");
			scanf_s("%f", &length);

			area = length * length;

			printf("Square area: %.2f \n", area);

			break;

		case 3: printf("Choice is 3 \n");

			printf("Enter rectangle height: ");
			scanf_s("%f", &height);

			printf("Enter rectangle width: ");
			scanf_s("%f", &width);

			area = height * width;

			printf("Rectangle area: %.2f \n", area);

			break;

		case 4: printf("Choice is 4 \n");

			printf("Enter parallelogram height: ");
			scanf_s("%f", &height);

			printf("Enter parallelogram base: ");
			scanf_s("%f", &base);

			area = base * height;

			printf("Parallelogram area: %.2f \n", area);

			break;

		case 5: printf("Choice is 5 \n");

			printf("Enter length of the top of the trapezoid: ");
			scanf_s("%f", &length);

			printf("Enter trapezoid base: ");
			scanf_s("%f", &base);

			printf("Enter trapezoid height: ");
			scanf_s("%f", &height);

			area = 0.5 * (length + base) * height;

			printf("Trapezoid area: %.2f \n", area);

			break;

		case 6: printf("Choice is 6 \n");

			printf("Enter circle radius: ");
			scanf_s("%f", &radius);

			area = 3.1415 * radius * radius;

			printf("Circle area: %.2f \n", area);

			break;

		case 7: printf("Choice is 7 \n");

			printf("Enter half the height of the ellipse: ");
			scanf_s("%f", &height);

			printf("Enter half the width of the ellipse: ");
			scanf_s("%f", &width);

			area = 3.1415 * height * width;

			printf("Ellipse area: %.2f \n", area);

			break;

		case 8: printf("Choice is 8 \n");

			printf("Enter sector radius: ");
			scanf_s("%f", &radius);

			printf("Enter sector angle: ");
			scanf_s("%f", &angle);

			area = 5.5 * radius * radius * angle;

			printf("Sector area: %.2f \n", area);

			break;

		default: printf("That is not one of the options \n");
			goto start;

			break;
	}
}