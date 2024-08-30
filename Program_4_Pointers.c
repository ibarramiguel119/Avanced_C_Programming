#include <stdio.h>

int main() {
    int var = 10;       // Declaramos una variable de tipo int
    int *ptr = &var;    // Declaramos un puntero que apunta a la dirección de var

    // Imprimimos la dirección de var usando el operador & y el valor del puntero
    printf("La dirección de var es: %p\n", &var);
    printf("El valor de ptr es: %p\n", ptr);

    // Imprimimos el valor almacenado en var y el valor al que apunta el puntero usando el operador de desreferencia (*)
    printf("El valor de var es: %d\n", var);
    printf("El valor al que apunta ptr es: %d\n", *ptr);

    // Modificamos el valor de var usando el puntero
    *ptr = 20;

    // Imprimimos el nuevo valor de var
    printf("El nuevo valor de var es: %d\n", var);

    return 0;
}
