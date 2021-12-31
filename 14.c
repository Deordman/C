// Dışardan Girilen Bir Sayının Tam Bölünenlerinin Toplamı 

#include <stdio.h>

int main()

{
    int x,i;

    printf("Sayi Giriniz: ");
    scanf("%d", &x);

    for (i = x; i >= 1; i--)
    {
        if (x%i==0)
        {
            printf("%d", i);
        }
        
    }
    
}