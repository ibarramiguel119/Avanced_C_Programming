#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // Para la función sleep()

// Definición de los estados
typedef enum {
    ESTADO_VERDE,
    ESTADO_AMBAR,
    ESTADO_ROJO
} Estado;

// Prototipos de funciones
void estadoVerde();
void estadoAmbar();
void estadoRojo();

// Declaramos un puntero a función
void (*estadoActual)(void);

// Función para cambiar el estado
void cambiarEstado(Estado nuevoEstado) {
    switch (nuevoEstado) {
        case ESTADO_VERDE:
            estadoActual = estadoVerde;
            break;
        case ESTADO_AMBAR:
            estadoActual = estadoAmbar;
            break;
        case ESTADO_ROJO:
            estadoActual = estadoRojo;
            break;
        default:
            printf("Estado desconocido\n");
            exit(1);
    }
}

// Función del estado verde
void estadoVerde() {
    printf("Semáforo en Verde\n");
    sleep(2);  // Espera de 2 segundos
    cambiarEstado(ESTADO_AMBAR);  // Cambia al siguiente estado
}

// Función del estado ámbar
void estadoAmbar() {
    printf("Semáforo en Ámbar\n");
    sleep(1);  // Espera de 1 segundo
    cambiarEstado(ESTADO_ROJO);  // Cambia al siguiente estado
}

// Función del estado rojo
void estadoRojo() {
    printf("Semáforo en Rojo\n");
    sleep(3);  // Espera de 3 segundos
    cambiarEstado(ESTADO_VERDE);  // Cambia al siguiente estado
}

int main() {
    // Inicializa la máquina de estados en el estado verde
    cambiarEstado(ESTADO_VERDE);

    // Bucle infinito de la máquina de estados
    while (1) {
        estadoActual();  // Llama a la función del estado actual
    }

    return 0;
}
