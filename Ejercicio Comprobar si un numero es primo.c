//Comprobar que un número es primo

#include <stdio.h>

int main (){
	int x, aux, i;
	
	printf ("Introducir un numero entero: ");
	scanf ("%i", &x);
	
	aux = 0;
	
	if (x >= 1 && x != 2){
		for (i = 2; i < x; i++){
			if (x % i == 0){
				aux = 1;
			}
		}
		if (aux == 0){
			printf ("El numero es primo.");
		}
		else {
			printf ("El numero no es primo.");
		}
	}
	else if (x == 2){
		printf ("El numero es primo.");
	}
	else {
		printf ("El numero ingresado es invalido.");
	}
	
	printf ("\n");
	
	system ("pause");
	return 0;
}
