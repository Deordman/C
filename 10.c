/* İçerden Tanımlı 4 değer olan x ve y'nin toplamını z'ye atayan kod */

#include <stdio.h>


int main()

{
    int i;
    int x[4]={2,8,9,-5};
    int y[4]={91,83,-1000,300};
    int z[4];

    for (i=0; i<4; i++) 
    {
       z[i]=x[i]+y[i];
    }

    for (i=0; i<4; i++)
    {
        printf("Degerlerimiz %d \n", z[i]);
    }
    
    
}