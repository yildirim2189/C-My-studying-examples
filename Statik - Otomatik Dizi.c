#include <stdio.h>
void statikdizi1(void);
void otomatikdizi1(void);
int main()												// statik dizi degerini korumakta oldugunu gosteren program
														// eger statik diziye ilk degerler atanmazsa otomatik 0 atanir.
{
	printf("Her diziye ilk cagri : \n");
	statikdizi1();
	otomatikdizi1();
	printf("\nHer diziye ikinci cagri : \n");
	statikdizi1();
	otomatikdizi1();
	return 0;
}

void otomatikdizi1(void)
{
	int a[3]={1,2,3};
	int i;
	printf("\notomatik diziye girerken degerler : \n");
	for(i=0;i<3;i++)
	printf("a[%d] = %d   ",i,a[i]);
	printf("\notomatik diziden cikarken degerler(+5) : \n");
	for(i=0;i<3;i++)
	printf("a[%d] = %d   ",i,a[i]+=5);
}
void statikdizi1(void)
{
	static int a[3];
	int i;
	printf("\nstatik diziye girerken degerler : \n");
	for(i=0;i<3;i++)
	printf("a[%d] = %d   ",i,a[i]);
	printf("\nstatik diziden cikarken degerler(+5) : \n");
	for(i=0;i<3;i++)
	printf("a[%d] = %d   ",i,a[i]+=5);
}
