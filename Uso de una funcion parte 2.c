//Uso de una función parte 2

#include <stdio.h>

int maxima ();

int main (){
	int x, y, max;
	
	printf ("Insertar un numero entero: ");
	scanf ("%i", &x);
	
	printf ("Insertar otro numero entero: ");
	scanf ("%i", &y);
	
	max = maxima (x, y);
	
	printf ("El valor máximo es %i.", max);
	
	printf ("\n");
	
	system ("pause");
	return 0;
}

int maxima (int a, int b){
	
	int aux;
	
	if (a > b){
		aux = a;
	}
	else if (a < b) {
		aux = b;
	}
	else{
		aux = a;
	}
	
	return aux;
}
