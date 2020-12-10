//

#include <stdio.h>

int main (){
	char c;
	
	do{
		printf ("Introduzca una letra: ");
		fflush  (stdin);
		scanf ("%c", &c);
	}while (c != 'x');
	
	system ("pause");
	return 0;
}
