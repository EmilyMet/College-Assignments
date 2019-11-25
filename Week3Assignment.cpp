//User enters subject marks and the program outputs their average grade, which subjects they passed or failed and their highest mark.
#include "stdio.h"

	void main()
	{
		int englishMark = 0;
		int frenchMark = 0;
		int mathsMark = 0;
		int irishMark = 0; 
		int scienceMark = 0;
		float averageMark = 0.00;

		printf("Enter English Marks: ");
		scanf_s("%d", &englishMark);

		printf("Enter French Marks: ");
		scanf_s("%d", &frenchMark);

		printf("Enter Maths Marks: ");
		scanf_s("%d", &mathsMark);

		printf("Enter Irish Marks: ");
		scanf_s("%d", &irishMark);

		printf("Enter Science Marks: ");
		scanf_s("%d", &scienceMark);

		averageMark = (englishMark + frenchMark + mathsMark + irishMark + scienceMark) / 5;

		printf("\n");

		printf("Average Mark: %.2f \n", averageMark);

		printf("Failed: ");

		if (englishMark < 40)
			{
				printf("English, ");
			}

		if (frenchMark < 40)
			{
				printf("French, ");
			}

		if (mathsMark < 40)
			{
				printf("Maths, ");
			}

		if (irishMark < 40)
			{
				printf("Irish, ");
			}

		if (scienceMark < 40)
			{
				printf("Science.");
			}

		printf("\n");
		
		printf("Passed: ");

		if (englishMark >= 40)
			{
				printf("English, ");
			}

		if (frenchMark >= 40)
			{
				printf("French, ");
			}

		if (mathsMark >= 40)
			{
				printf("Maths, ");
			}

		if (irishMark >= 40)
			{
				printf("Irish, ");
			}

		if (scienceMark >= 40)
			{
				printf("Science.");
			}

		printf("\n");

		if (englishMark > frenchMark && englishMark > mathsMark && englishMark > scienceMark && englishMark > irishMark)
			{
				printf("Highest Mark: %d in English", englishMark);
			}

		if (frenchMark > englishMark && frenchMark > mathsMark && frenchMark > irishMark && frenchMark > scienceMark)
			{
				printf("Highest Mark: %d in French", frenchMark);
			}

		if (mathsMark > englishMark && mathsMark > frenchMark && mathsMark > irishMark && mathsMark > scienceMark)
			{
				printf("Highest Mark: %d in Maths", mathsMark);
			}

		if (irishMark > englishMark && irishMark > frenchMark && irishMark > mathsMark && irishMark > scienceMark)
			{ 
				printf("Highest Mark: %d in Irish", irishMark);
			}

		if (scienceMark > englishMark && scienceMark > frenchMark && scienceMark > mathsMark && scienceMark > irishMark)
			{
				printf("Highest Mark: %d in Science", scienceMark);
			}


	}