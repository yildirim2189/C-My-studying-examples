#include <stdio.h>
#define BOYUT 5
void dizi_ayarla(int[],int);
void eleman_ayarla(int);
int main()
{
	int a[BOYUT]={0,1,2,3,4};
	int i;
	printf("Butun dizinin referansa gore cagirilarak gecmesinin etkileri : \n");
	printf("Orijinal dizinin degerleri : \n");
	for(i=0;i<BOYUT;i++)
	printf("%3d",a[i]);
	printf("\n");
	dizi_ayarla(a,BOYUT); // Referansa gore cagirilarak gecti.
	printf("Ayarlanan dizinin degerleri :\n");
	for(i=0;i<BOYUT;i++)
	printf("%3d",a[i]);
	printf("\n\n\nDizinin elemaninin degere gore cagirilarak gecmesinin etkileri : \n");
	printf("a[3] degeri = %d",a[3]);
	eleman_ayarla(a[3]);
	printf("a[3] degeri = %d",a[3]);
	return 0;
}

void dizi_ayarla(int dizi[],int boyut)
{
	int j;
	for(j=0;j<boyut;j++)
	dizi[j]*=2;
}
void eleman_ayarla(int e)
{
	printf("\neleman_ayarla'daki deger = %d\n",e*=2);
}
