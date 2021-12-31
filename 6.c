// içerden tanımlı 10 elemanlı bir dizinin çift indisli sayıların toplamını bulan program

#include <stdio.h>

int main()
{

int i=0, t=0;
int x[10]={2, 12, 24, 36, 44, 58, 11, 75, 33};


while (i<10)
{
	t=t+x[i];
	
	i=i+2;
}
	
	printf("Toplama Sonucu : %d", t);

}
