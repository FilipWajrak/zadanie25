#include <stdio.h>
#define PI 3.14159265
float objetosc_prostopadloscianu(float a, float b, float c)
{
    return a * b * c;
}
float objetosc_walec(float r, float h)
{
    return PI * r *r *h;
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
void obliczanie_objetosc_walec(){
  float r, h,objetosc;

    printf("Podaj promien walca: ");
    scanf("%f", &r);

    printf("Podaj wysokosc walca: ");
    scanf("%f", &h);

    objetosc = objetosc_walec(r,h);


    printf("Objetosc prostopadloscianu wynosi: %.2f\n", objetosc);
}


int main() {
obliczanie_objetosc_walec();
//obliczanie_objetosc_prostopadloscianu();

}
