//Algoritmo de la burbuja

#include <stdio.h>

int main (){
    int x,y,aux;
    
    printf ("Introducir el valor de x: ");
    scanf ("%i", &x);
    printf ("Introducir el valor de y: ");
    scanf ("%i", &y);
    
    aux = y;
    y = x;
    x = aux;
    
    printf ("El valor de x es: %i\n", x);
    printf ("El valor de y es: %i\n\n", y);
    
    
    system ("Pause");
    return 0;
}
