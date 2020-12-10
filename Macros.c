//Macros

#include <stdio.h>
#define PI 3.1416

int main (){
    float x;
    int y;
    
    x = PI;
    
    printf ("Introduzca un valor para y: ");
    scanf ("%i", &y);
    printf ("El valor de y es: %i\n\n", y);
    
    x = x * y;
    
    printf ("El nuevo valor de x es: %f\n\n", x);
    
    system ("Pause");
    return 0;
}
