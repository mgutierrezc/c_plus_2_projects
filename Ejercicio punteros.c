//

#include <stdio.h>

int main (){
	int x, *y;
	
	x = 4;
	y = &x;
	
	printf ("El valor de *y es %i.\n\n", *y);
	
	system ("pause");
	return 0;
}
