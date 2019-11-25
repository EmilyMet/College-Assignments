//program to practice string manipulation
//converts lower case letters to upper, upper case to lower and numbers to a * character
//keeps count of the number of characters changed. 

#include <stdio.h>
#include <string.h>

char str1[] = "PerSZNzVBjMCMzHnilwY";
char str2[] = "OfCD5EO4jzlbirH8JtWb";
char str3[] = "KTqCl3lkQ8ydjsymydyF";
int i;
int length;
int num = 0;
int low = 0;
int up = 0;

void main() {

	printf("String #0 \n");
	printf("Original string: %s \n", str1);

	length = sizeof(str1) / sizeof(char);
	for (i = 0; i < length; i++) {
		int ascii = str1[i];
		if (ascii >= 97 && ascii <= 122) {
			str1[i] = (char)(ascii - 32);
			low = low++;
		}
		else if (ascii >= 65 && ascii <= 90) {
			str1[i] = (char)(ascii + 32);
			up = up++;
		}
		else if (ascii >= 48 && ascii <= 57) {
			str1[i] = '*';
			num = num++;
		}
	}
	printf("New string: %s\n", str1);
	printf("%d digits changed to *; %d lower changed to upper; %d upper changed to lower \n", num, low, up);

	num = 0; low = 0; up = 0;

	printf("\nString #1 \n");
	printf("Original string: %s \n", str2);

	length = sizeof(str2) / sizeof(char);
	for (i = 0; i < length; i++) {
		int ascii = str2[i];
		if (ascii >= 97 && ascii <= 122) {
			str2[i] = (char)(ascii - 32);
			low = low++;
		}
		else if (ascii >= 65 && ascii <= 90) {
			str2[i] = (char)(ascii + 32);
			up = up++;
		}
		else if (ascii >= 48 && ascii <= 57) {
			str2[i] = '*';
			num = num++;
		}
	}
	printf("New string: %s\n", str2);
	printf("%d digits changed to *; %d lower changed to upper; %d upper changed to lower \n", num, low, up);

	num = 0; low = 0; up = 0;

	printf("\nString #2 \n");
	printf("Original string: %s \n", str3);

	length = sizeof(str3) / sizeof(char);
	for (i = 0; i < length; i++) {
		int ascii = str3[i];
		if (ascii >= 97 && ascii <= 122) {
			str3[i] = (char)(ascii - 32);
			low = low++;
		}
		else if (ascii >= 65 && ascii <= 90) {
			str3[i] = (char)(ascii + 32);
			up = up++;
		}
		else if (ascii >= 48 && ascii <= 57) {
			str3[i] = '*';
			num = num++;
		}
	}
	printf("New string: %s\n", str3);
	printf("%d digits changed to *; %d lower changed to upper; %d upper changed to lower \n", num, low, up);

	num = 0; low = 0; up = 0;
}
