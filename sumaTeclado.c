// Utilizando el concepto de función, construya un programa que calcule la 
//suma de una serie de números enteros leídos del teclado. El programa debe detenerse cuando el usuario ingrese el número 0.
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i, n;
    int suma, un_numero;
    suma = 0;
    printf ("Ingrese la cantidad de numeros que va a ingresar:");
    scanf ("%d", &n);
    (void) getchar ();
    for (i=1; i<=n; i++)
    {
        printf ("Suma N%d\n", i);
        printf ("Ingresa el valor de un numero: ");
        scanf ("%d", &un_numero);
        (void) getchar ();
        suma=suma+un_numero;
        putchar ('\n');
    }
    printf ("Valor de suma: %d\n", suma);
    system ("pause");
    return EXIT_SUCCESS;
}


!=0 

