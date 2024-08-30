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




int main(){
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

    return 0;
}