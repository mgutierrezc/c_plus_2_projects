//Escribe un programa que calcule el factorial de un numero n entero positivo leído por teclado

#include <stdio.h>

int main (){
	int x, mult, i;
	
	mult = 1;
	
	printf ("Introduzca un numero entero: ");
	scanf ("%i", &x);
	
	if (x >= 0){
		if (x > 0){
			for (i = 1; i <= x; i++){
				mult = mult * i;
			}
			printf ("El factorial del numero introcido es %i.\n", mult);
		}
		else {
			printf ("El factorial del numero introcido es 1.\n"); 
		}
	}
	else {
		printf ("Numero invalido");
	}
	system ("pause");
	return 0;
}
