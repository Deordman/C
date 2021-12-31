// Tek Boyutlu Dizi İle Harfi Tersten Yazma

#include <stdio.h>

int main()

{
    
    int i;
    char y[5]={'Y','U','S','U','F'};
    
    
    for (i=4; i>=0; i--)
    {
        printf("%c \n", y[i]);
    }
    
}