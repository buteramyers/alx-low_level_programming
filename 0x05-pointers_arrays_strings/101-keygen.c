#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Function generating passwords of length X*/
void randomPasswordGeneration(int X)
{
	/*initialize counter*/
	int i = 0;

	int randomizer = 0;

	/** seed the random-number generator
	* with current time so that the numbers
	* will be different every time
	*srand((unsigned int)(time(NULL)));
	*/

	/*Array of numbers*/
	char numbers[] = "0123456789";

	/* Array of small alphabets*/
	char letter[] = "abcdefghijklmnopqrstuvwxyz";

	/*Array of capital alphabets*/
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	/*Array of all the special symbols*/
	char symbols[] = "!@#$%^&*?";

	/* Stores the random password*/
	int password[X];

	/* To select the randomizer*/
	/* inside the loop*/
	randomizer = rand() % 4;

	/* Iterate over the range [0, X]*/
	for (i = 0; i < X; i++) {

		if  (randomizer == 1) {
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2) {
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if  (randomizer ==3) {
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else {
			password[i] = letter[rand() % 26];
			randomizer = rand() %4;
			printf("%c", password[i]);
		}
	}
}

int main()
{
	/* length of the password to be generated*/
	int X;

	/** Function Call*/
	randomPasswordGeneration(X);

	printf("\n");

	return 0;
}
