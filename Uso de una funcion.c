//Funciones y punteros
//Calcular el número mayor con una función

#include <stdio.h>

int maxima ();

int main (){
	int x, y;
	
	printf ("Insertar un numero entero: ");
	scanf ("%i", &x);
	
	printf ("Insertar otro numero entero: ");
	scanf ("%i", &y);
	
	maxima (x, y);
	
	printf ("\n");
	
	system ("pause");
	return 0;
}

int maxima (int a, int b){
	
	if (a > b){
		printf ("El valor maximo es %i.", a);
	}
	else if (a < b) {
		printf ("El valor maximo es %i.", b);
	}
	else{
		printf ("Ambos numeros son iguales");
	}
	
	return 0;
}
