// İçerden tanımlı 5 elemanlı bir dizinin 3'e tam bölünen elemanlarının ekrana yazan program

#include <stdio.h>

int main()

{
    int x[5]={72, 85, 12, 90, 55};
    int i=0;

    while(i<5)
    {
        if(x[i]%2==0)
        {
            printf("%d \n", x[i]);
        }
        i++; 

    }
}

#include <stdio.h>

int main()

{
    int x[5]={12,65,32,86,32};
    int y=0;

    while(y<5)
    {
        if (x[y]%2==0)
        {
            printf("%d \n", x[y]);
        }
        y++;
        
    }
}
