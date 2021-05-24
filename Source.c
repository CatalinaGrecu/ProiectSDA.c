#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N; // declararea unei variabile
	scanf_s ("%d", &N); // citirea variabilei de tip integer
	int x1 = 1, x2 = 1, x3 = 2; // sunt necesari ultimii 2 termeni din sirul lui fibonacci pentru a genera unul nou = suma celor doi temeni
	if (N < 1) {
		printf("Numarul intodus nu este valid\n"); // se afiseaza textul daca numarul nu este valid
	}
	else if (N >= 1) { // daca variabila este mai mare ca 1 trecem pe celalalt branch
		printf(" 0 1 1 "); // afisam primii 3 termeni
		while (x3 <= N) { // loop
			printf("%d ", x3); // afisam termenul nou generat
			x1 = x2; // trecem la urmatorii 3 termeni si eliminam primul din sirul de 3 termeni pr a forma unul nou
			x2 = x3;
			x3 = x1 + x2; // termenul nou generat e suma celorlalte doua din sir
		}
	}

	return 0;
}