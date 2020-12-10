//Operaciones básicas

#include <stdio.h>
#include <math.h> //funciones como pow

int main (){
    int x, y;
    
    x = 14;
    y = 4;
    
    x += y;
    y++;
    printf ("x + y = %i.\n\ny + 1 = %i.\n\n", x, y);
    x--;
    printf ("x - 1 = %i\n\n", x);
    system ("pause");
    return 0;
}
