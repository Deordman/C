/* Dışarıdan girilen 10 değer */

#include <stdio.h>


int main()

{
    int i;
    int x[10];

    for (i=0; i<10; i++) 
    {
        printf("Degerleri Giriniz : ");
        scanf("%d", &x[i]);
    }

    for (i=0; i<10; i++)
    {
        printf("Degerlerimiz %d \n", x[i]);
    }
    
    
}