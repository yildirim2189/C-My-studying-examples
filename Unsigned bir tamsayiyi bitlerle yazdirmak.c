#include <stdio.h>
void bitleriGoster(unsigned);
int main()
{
	unsigned x;
	printf("Isaretsiz bir tam sayi giriniz :");
	scanf("%u",&x);
	bitleriGoster(x);
	return 0;
}

void bitleriGoster(unsigned y)
{
	unsigned c, mask;
	mask = 1<<31;
	
	printf("%7u = ",y);
	
	for(c=1;c<=32;c++)
	{
		putchar(y&mask?'1':'0');
		y<<=1;
		
		if(c%8==0)
		putchar(' ');
	}
	putchar('\n');
}
