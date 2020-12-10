// Variables

#include <stdio.h>

int main (){
    
    int x; //declaración de una variable entera desde -32768 hasta 32767, 2^16(ocupan 16 bits) 
    float y; //declaración de una variable con decimales, 2^32 (ocupan 32 bits)
    double y2; //Flotante con rango 2^64 (ocupan 64 bits)
    char z; //Caracter: a,4
    
    x = 24;
    y = -10.5;
    y2 = 20.9;
    z = 'a';
    
    printf ("Valor de x: %i.\nValor de y: %f. \n",x,y);
    printf ("Valor de y2: %f.\n",y2);
    printf ("Valor de z: %c.\n", z);
    
    system ("pause");
    return 0;
}
