// Sayısal Olarak Girilen Bir Ay Bilgisini Ekrana "Ocak, Şubat, Mart..." Şeklinde Yazan Kod

#include <stdio.h>

int main()

{
    int x;

    printf("1 Ile 12 Arasinda Deger Girmelisiniz : ");
    scanf("%d", &x);

    if (x==1)
    {
        printf("Ocak");
    }

    else if (x==2)
    {
        printf("Subat");
    }

    else if (x==3)
    {
        printf("Mart");
    }

    else if (x==4)
    {
        printf("Nisan");
    }

    else if (x==5)
    {
        printf("Mayis");
    }

    else if (x==6)
    {
        printf("Haziran");
    }

    else if (x==7)
    {
        printf("Temmuz");
    }

    else if (x==8)
    {
        printf("Agustos");
    }

    else if (x==9)
    {
        printf("Eylul");
    }

    else if (x==10)
    {
        printf("Ekim");
    }

    else if (x==11)
    {
        printf("Kasim");
    }

    else if (x==12)
    {
        printf("Aralik");
    }
}