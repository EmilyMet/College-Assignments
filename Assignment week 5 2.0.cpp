//Program calculates the min, max and average of several floating point numbers
#include <stdio.h>

void main()
{
	double array[10];
	double average = 0.0;
	double max = 0.0;
	double min = 10.0;
	double total = 0.0;
	int counter;

	printf("Program to calculate average, min and max of up to 10 floating point numbers.\nEnter up to 10 numbers <0.0 to end input>\n");

	for (counter = 1; counter <= 10; counter++)
	{
		printf("Enter #%d: ", counter);
		scanf_s(" %lf", &array[counter - 1]);

		if (array[counter - 1] == 0.0) {
			break;
		}
		total = total + array[counter - 1];

		if (array[counter - 1] > max) {
			max = array[counter - 1];
		}
		if (array[counter - 1] < min) {
			min = array[counter - 1];
		}
		average = total / counter;
		continue;
	}
	if (counter == 1 && array[counter - 1] == 0.0) {
		printf("no numbers entered - quitting");
		}
	else {
		printf("Average = %.2f\n", average);
		printf("Minimum number = %.2f\n", min);
		printf("Maximum number = %.2f\n", max);
	}
}