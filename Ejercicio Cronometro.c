//Ejercicio cronómetro

#include <stdio.h>
#include <windows.h>

int main (){
	int h, m, s, x;
	
	x = 1000;
	
	for (h = 0; h <= 23; h++){
		for (m = 0; m <= 59; m++){
			for (s = 0; s <= 59; s++){
				printf ("%02i:%02i:%02i\r", h, m, s);
				Sleep (x);//Sleep ();el tiempo se pondrá en milisegundos, mil milisegundos son un segundo	
			}
		}
	}
	
	system ("pause");
	return 0;
}
