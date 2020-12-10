//Uso de funciones void

#include <stdio.h>

void factorial ();

int main (){
	
	factorial ();
	
	system ("pause");
	return 0;
}

void factorial (){
	int x, aux, i;
	
	printf ("Escribir un numero x: ");
	scanf ("%i", &x);
	
	aux = 1;
	
	for (i = 2; i <= x; i++){
		aux = aux * i;
	}
	
	printf ("El factorial de x es: %i.\n", aux);
}
