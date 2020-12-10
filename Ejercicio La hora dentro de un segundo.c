//Realizar un programa que pida 3 números: horas, minutos y segundos, respectivamente.
//Con esa información, el programa deberá proporcionar la hora dentro de un segundo.

#include <stdio.h>

int main (){
	int h,m,s;
	
	printf ("Insertar la hora: ");
	scanf ("%i", &h);
	
	printf ("Insertar los minutos: ");
	scanf ("%i", &m);
	
	printf ("Insertar los segundos: ");
	scanf ("%i", &s);
	
	if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 ){
		if (s <= 58){
			s++;
			printf ("La hora dentro de un segundo sera: %i:%i:%i.\n\n", h, m, s);
			}
		else if (m <= 58){
			s = 00;
			m++;	
			printf ("La hora dentro de un segundo sera: %i:i%:i%.\n\n", h, m, s);
			}
		else if (h <= 22){
			s = 00;
			m = 00;
			h++;
			printf ("La hora dentro de un segundo sera: %i:%i:%i.\n\n", h, m, s);
			}
		else {
			printf ("La hora dentro de un segundo será: 00:00:00.\n\n");
		}
	}  
	else {
		printf ("Datos invalidos\n\n");
	}
	system ("pause");
	return 0;
}
