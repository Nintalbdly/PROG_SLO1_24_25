#include <stdio.h> 

int main(void) {
	char valA = 0;
	char valB = 0;
	
	printf("exercice 6 : alain \n");

	printf("entrez une valeur 1 a 9 \n");
	scanf_s("%d", (int*)&valA);

	if (valA > 9) {
		valA = 9;

		printf("TestA ValA limite � 9 \n");
		printf("%d", valA);

	}
	else if (valA <= 0) {
		valA = 1;
		printf("testA valA forc�e � 1 \n");
		printf("%d", valA);
	}	
	else {
		printf("vous avez entr�e la valeur %d \n", valA);
	}
}