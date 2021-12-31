// 55 ile 65 dahil Arasında ki sayıların karesini toplayan kod

#include <stdio.h>

int main()

{
    int x, z=0;

    for (x = 55; x<=65; x++)
    {
        z=z+x*2;
    }

    printf("%d", z);
    
}