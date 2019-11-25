//This assignment will get you writing functions that take a string or a char as input
//It counts the numbers of vowelsand consonants in a string entered by the user
//It uses NO library string / char functions(i.e.they are NOT allowed).
//The only include you need is stdio.h for the input / output functions

#include <stdio.h>

int getLength(char string[]) {
	int length = 0;
	for(int i = 0; string[i] != '\0'; i++) {
		length++;
	}
	return length;
}

int isAlphabetical(char c) {
	if ((c >= 'A') && (c <= 'Z'))
		return 1;
	if ((c >= 'a') && (c <= 'z'))
		return 1;
	else { return 0; }
}

int isVowel(char c) {
	if ((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') || (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
		return 1;
	else { return 0; }
}

int countVowels(char string[]) {
	int numVowels = 0;
	for (int i = 0; i <= getLength(string); i++) {
		if (isAlphabetical(string[i]) && isVowel(string[i])) {
			numVowels += 1;
		}
	}
	return numVowels;
}

int countConsonants(char string[]) {
	int numConsonants = 0;
	for (int i = 0; i <= getLength(string); i++) {
		if (isAlphabetical(string[i]) && !isVowel(string[i])) {
			numConsonants += 1;
		}
	}
	return numConsonants;
}

int main()
{
	char string[81];
	int numVowels, numConsonants, length;
	puts("Enter string:");
	gets_s(string, 80);

	length = getLength(string);
	printf("Length of string: %d \n", length);

	numVowels = countVowels(string);
	printf("Number of vowels = %d \n", numVowels);

	numConsonants = countConsonants(string);
	printf("Number of consonants = %d \n", numConsonants);

	return 0;
}