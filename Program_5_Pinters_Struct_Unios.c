#include <stdio.h>

// Definición de la unión
typedef union {
    int int_value;
    float float_value;
} data_union;

// Definición de la estructura que contiene la unión
typedef struct {
    data_union data; // Unión dentro de la estructura
    int type;        // Tipo de dato almacenado en la unión (0 para int, 1 para float)
} data_1;

int main() {
    data_1 x;        // Declara una variable de tipo data_1
    data_1 *p;       // Declara un puntero a data_1

    p = &x;          // Asigna la dirección de x al puntero p

    // Usar la unión para almacenar un valor entero
    p->type = 0;     // Establecer el tipo como entero
    p->data.int_value = 10;
    
    // Imprimir el valor entero almacenado en la unión
    if (p->type == 0) {
        printf("p->data.int_value: %d\n", p->data.int_value);
    }

    // Usar la unión para almacenar un valor flotante
    p->type = 1;     // Establecer el tipo como flotante
    p->data.float_value = 3.14;

    // Imprimir el valor flotante almacenado en la unión
    if (p->type == 1) {
        printf("p->data.float_value: %.2f\n", p->data.float_value);
    }

    return 0;
}