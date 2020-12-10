//Ejercicio While

#include <stdio.h>

int main (){
	int x, y, i;
	
	printf ("Introduzca un numero x: ");
	scanf ("%i", &x);
	
	printf ("Introduzca un numero mayor que x: ");
	scanf ("%i", &y);
	
	i = x + 1;
	
	do {
		printf ("%i\n", i);
		i++;
	} while (i < y);
	
	printf ("\n");
	
	system ("pause");
	return 0;
}
