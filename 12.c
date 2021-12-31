// Fonksiyonlu Hesap Makinesi

#include <stdio.h>

float Toplama (float a, float b)
{
    return a+b;
}
float Cikarma (float a, float b)
{
    return a-b;
}
float Carpma (float a, float b)
{
    return a*b;
}
float Bolme (float a, float b)
{
    return a/b;
}

void main()

{
    float a,b;

    printf("1. Sayiyi Giriniz : ");
    scanf("%f", &a);

    printf("2. Sayiyi Giriniz : ");
    scanf("%f", &b);

    float T=Toplama (a,b);
    float C=Cikarma (a,b);
    float CA=Carpma (a,b);
    float BOL=Bolme (a,b);

    printf(" Toplama : %f \n Cikarma : %f \n Carpma : %f \n Bolme : %f \n", T,C,CA,BOL);
}
