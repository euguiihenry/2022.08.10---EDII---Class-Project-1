/*
 ============================================================================
 Name        : 10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Prototypes:
	void moveTorre(int, char, char, char); // Just for the language to know that this function exists.

// Functions:
	int main(void) {
		moveTorre(3, 'A', 'C', 'B');
		return EXIT_SUCCESS;
	}

	void moveTorre(int n, char orig, char dest, char aux) {
		// Caso Base:
			if (n == 1) {
				printf("\nMover disco 1 da torre %c para a torre %c", orig, dest);
				return;
			}

		// Caso Recursivo:
			moveTorre((n-1), orig, aux, dest);
			printf("\nMover disco %i da torre %c para a torre %c", n, orig, dest);
			moveTorre((n-1), aux, dest, orig);
	}
