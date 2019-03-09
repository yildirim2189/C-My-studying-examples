//DICE ROLLING TEST
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BOYUT 36000
#define FREK 13
int zarAt(void);
int main()
{
	int i,j;
	int zar[BOYUT];
	int frekans[FREK]={0};
	srand(time(NULL));
	for(i=0;i<36000;i++)
	{
		zar[i]=zarAt();
		++frekans[zar[i]];
	}
	printf("2 zar 36000 defa atildi. En cok 7 gelme ihtimali bulunmaktadir.Bunu test ediyoruz.\n\
2 ve 12 gelme ihtimali en az olmasi gerekir. \n\n");
	
	for(j=2;j<FREK;j++)
	printf("2 zarin toplami = %3d, %4d defa gelmistir.\n",j,frekans[j]);

	return 0;
}

int zarAt(void)
{
	int a1 = rand()%6+1;
	int a2 = rand()%6+1;
	return a1+a2;
}


