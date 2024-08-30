#include <stdio.h>

// Definición de una unión
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // Almacena un entero en la unión
    data.i = 10;
    printf("data.i : %d\n", data.i);

    // Almacena un número flotante en la misma unión
    data.f = 220.5;
    printf("data.f : %f\n", data.f);

    // Almacena una cadena en la misma unión
    // Esto sobrescribe los datos previos
    strcpy(data.str, "Hello, world!");
    printf("data.str : %s\n", data.str);

    // Imprime los valores de todos los miembros
    printf("data.i : %d\n", data.i);   // Valor corrompido
    printf("data.f : %f\n", data.f);   // Valor corrompido
    printf("data.str : %s\n", data.str);

    return 0;
}
