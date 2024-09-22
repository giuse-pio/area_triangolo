#include<stdio.h>

int main() {
    float b, h, area;
    printf("inserisci base: ");
    scanf("%f", &b);
    printf("inserisci altezza: ");
    scanf("%f", &h);
    area = (b * h)/2;
    printf("area = %f", area);
}

