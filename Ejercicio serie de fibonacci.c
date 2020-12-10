//Mostrar la serie de fibonacci hasta el término n introducido por teclado

#include <stdio.h>

int main (){
	int x, y, n, sumaf, i;
	
	x = 0;
	y = 1;
		
	printf ("Introduzca el numero de terminos para la serie de Fibonacci: ");
	scanf ("%i", &n);
	
	if (n > 0){
		for (i = 1; i <= n; i++){
			printf ("%i, ", x);
			sumaf = x + y;
			x = y;
			y = sumaf;
		}
	}
	else {
		printf ("Numero invalido");
	}
	printf ("\n");
	
	system ("pause");
	return 0;
}
