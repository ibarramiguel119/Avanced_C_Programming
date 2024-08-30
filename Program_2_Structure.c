#include <stdio.h>


//Estruc 1 method 1

struct data_1
{
    float a;
    int b;
}x,y;

//Estruct 2 method 1


struct data_2
{
    float c;
    int d;
};

/// Estruct typedef 
typedef struct 
{
    int f;
    float g;
}data_3;


//Estruct typedef bitfield

typedef struct 
{
    unsigned int bit0: 1;
    unsigned int bit1: 2;

}data_bit;




int main(void){
    data_3 data_01;
    data_01.f=10;
    data_3 data_02 ={45,15.5};

    x.a=15.2;
    y.b=15;

    // Imprimir los valores
    printf("Valores de data_01: f = %d, g = %.2f\n", data_01.f, data_01.g);
    printf("Valores de data_02: f = %d, g = %.2f\n", data_02.f, data_02.g);
    printf("Valores de x: a = %.2f, b = %d\n", x.a, x.b);
    printf("Valores de y: a = %.2f, b = %d\n", y.a, y.b);

    data_bit prueba_bit;
    prueba_bit.bit0=1;
    prueba_bit.bit1=0b10;

    printf("bit1: %u\n", prueba_bit.bit1); // Imprime bit1 (que puede ser 0, 1, 2 o 3)

    if(prueba_bit.bit0){
        printf("bit0 is to n");
    }else{
        printf("bit0 is to 0");
    }
    

    return 0;
}