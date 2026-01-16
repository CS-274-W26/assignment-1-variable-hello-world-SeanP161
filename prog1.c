#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h> // For the random number generator

int main() {
	srand(time(NULL)); // Basically declaring "rand"

	int myrand = rand() % 11; // Random number 1-10 stored in "myrand"

	// If boundaries for what to be displayed
	if (myrand < 5) {
		printf("Eat more beef, kick less cats\n");
	} else if (myrand > 4 && myrand < 10) {
		printf("FRODO LIVES\n");
	} else {
		printf("Larn is the best roguelike\n");
	}


	printf("The random number was: %d\n", myrand); // Print what number
}
