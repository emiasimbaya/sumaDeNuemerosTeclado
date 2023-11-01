#include <stdio.h>
#include <stdlib.h>
int main()
// Programa que suma dos numeros introducidos por teclado, para tomar como referncia para
// hacer una suma de numeros infinitos hasta que el usuario ingrese 0
{
    int numero1, numero2, suma;
    printf( "Introduzca el primer numero: " );
    scanf( "%d", &numero1 );
    printf( "Introduzca el segundo numero: " );
    scanf( "%d", &numero2 );
    suma = numero1 + numero2;
    printf( "La suma es %d", suma );
    return 0;
}

