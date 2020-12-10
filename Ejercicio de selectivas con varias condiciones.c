//hacer un programa que diga si un número insertado está entre 0 y 1 o si no lo está

#include <stdio.h>

int main (){
	int x;
	
	printf ("Introduce un número: ");
	scanf ("%i", &x);
	
	if (x >=1 && x<=10){ //&& significa "y", mientras que || signigica "o"
		printf ("El número está entre 1 y 10.\n\n");
	}
	else {
		printf ("El número no está entre 1 y 10\n\n");
	}
	system ("pause");
	return 0;
}
