//Do y While
//Introducir dos números enteros distintos y mostrar en pantalla todos los que se encuentran entre ambos

#include <stdio.h>

int main (){
	int x,y,i;
	
	printf ("Introducir un numero x: ");
	scanf ("%i", &x);
	
	printf ("Introducir un numero mayor a x: ");
	scanf ("%i", &y);
	
	for (i = x + 1; i < y; i++){
		printf ("%i, ", i);
	}
	
	printf ("\n");
	
	system ("pause");
	return 0;
}
