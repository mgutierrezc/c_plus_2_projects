//hacer un programa que diga si un n�mero insertado est� entre 0 y 1 o si no lo est�

#include <stdio.h>

int main (){
	int x;
	
	printf ("Introduce un n�mero: ");
	scanf ("%i", &x);
	
	if (x >=1 && x<=10){ //&& significa "y", mientras que || signigica "o"
		printf ("El n�mero est� entre 1 y 10.\n\n");
	}
	else {
		printf ("El n�mero no est� entre 1 y 10\n\n");
	}
	system ("pause");
	return 0;
}
