//Introducir un número entre 1 y 4, y asignarle el día de la semana respectivo

#include <stdio.h>

int main (){
    int x;
    
    printf ("Introduzca un numero entre 1 y 4: ");
    scanf ("%i", &x);
    
    if (x == 1){
          printf ("Lunes.\n");
    }
    else if (x == 2){
         printf ("Martes.\n");
    }
    else if (x == 3){
         printf ("Miercoles.\n");
    }
    else if (x == 4){
         printf ("Jueves.\n");
    }
    else {
         printf ("Numero incorrecto.\n");
    }
    
    system ("Pause");
    return 0;
}
