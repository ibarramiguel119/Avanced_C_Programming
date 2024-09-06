#include <stdio.h>

// Definir la estructura
typedef struct {
    float re;  // Parte real
    float im;  // Parte imaginaria
} complex;

// Función que recibe un arreglo de punteros a estructuras complex
void modificarComplex(complex *p_struct[], int size) {
    for (int j = 0; j < size; j++) {
        // Modificar valores
        p_struct[j]->re = 1.25 + j;  // Cambiar parte real
        p_struct[j]->im = 2.50 + j;  // Cambiar parte imaginaria
    }
}

int main() {
    // Crear un arreglo de estructuras complex
    complex a[2] = {{0, 0}, {0, 0}};  // Inicializar a 0

    // Crear un arreglo de punteros a esas estructuras
    complex *p_a[2] = {&a[0], &a[1]};

    // Llamar a la función para modificar los valores
    modificarComplex(p_a, 2);

    // Mostrar los resultados
    for (int i = 0; i < 2; i++) {
        printf("Número complejo %d: %.2f + %.2fi\n", i + 1, a[i].re, a[i].im);
    }

    return 0;
}
