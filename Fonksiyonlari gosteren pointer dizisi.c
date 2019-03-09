/* Fonksiyonlari gosteren gostericilerin(pointer) dizisi */
#include <stdio.h>
/* Prototip */
void fonksiyon1(int);
void fonksiyon2(int);
void fonksiyon3(int);

int main()
{			/* f, arguman olarak int alan ve geriye deger dondurmeyen fonksiyonlari gosteren 3 gostericinin dizisidir.. */
	void (*f[3])(int) = {fonksiyon1,fonksiyon2,fonksiyon3}; 
	int secim;																							
	printf("0 ile 2 arasinda bir tamsayi giriniz, ya da cikis icin 3 giriniz :");
	scanf("%d",&secim);
	
	while(secim>=0&&secim<3)
	{
		(*f[secim])(secim);
		printf("\n0 ile 2 arasinda bir tamsayi giriniz, ya da cikis icin 3 giriniz :");
		scanf("%d",&secim);
	}
	printf("Programin calismasi bitti.\n");
	return 0;
}
void fonksiyon1(int a)
{
	printf("\n%d girdiniz, yani fonksiyon%d cagirildi.\n",a,a+1);
}
void fonksiyon2(int b)
{
	printf("\n%d girdiniz, yani fonksiyon%d cagirildi.\n",b,b+1);
}
void fonksiyon3(int c)
{
	printf("\n%d girdiniz, yani fonksiyon%d cagirildi.\n",c,c+1);
}


