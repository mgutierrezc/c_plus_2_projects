//Declarar una variable entera e inciarla entre 1 y 10. Luego, solicitar un número y ver si cumple.

#include <stdio.h>

int main (){
    int x;
    
    printf ("Introducir un numero entero: ");
    scanf ("%i",&x);
    
    if (x > 1){
       if (x < 10){
          printf ("El valor del numero esta entre 1 y 10\n\n");
       }
       else {
            printf ("El valor del numero no esta entre 1 y 10\n\n");
       }
    }
    
    system ("pause");
    return 0;
}
