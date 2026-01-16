#include <stdio.h>

float objetosc_prostopadloscianu(float a, float b, float c)
{
    return a * b * c;
}
void obliczanie_objetosc_prostopadloscianu(){
  float a, b, c, objetosc;

    printf("Podaj dlugosc prostopadloscianu: ");
    scanf("%f", &a);

    printf("Podaj szerokosc prostopadloscianu: ");
    scanf("%f", &b);

    printf("Podaj wysokosc prostopadloscianu: ");
    scanf("%f", &c);

    objetosc = objetosc_prostopadloscianu(a, b, c);


    printf("Objetosc prostopadloscianu wynosi: %.2f\n", objetosc);
}
int main() {

obliczanie_objetosc_prostopadloscianu();

}
