/* Sirali erisimli bir dosyadan okuma yapmak */

#include <stdio.h>

int main()
{
	int hesap;
	char isim[30];
	double bakiye;
	
	FILE *cfPtr; /* cfPtr = musteri.dat dosya gostericisi */
	
	if((cfPtr = fopen("musteri.dat","r")) == NULL)
	printf("Dosya acilamadi.\n");
	else
	{
		printf("%-10s%-13s%s\n","Hesap","Isim","Bakiye");
		fscanf(cfPtr,"%d%s%lf",&hesap,isim,&bakiye);
		
		while(!feof(cfPtr))
		{
			printf("%-10d%-13s%8.2f\n",hesap,isim,bakiye);
			fscanf(cfPtr,"%d %s %lf",&hesap,isim,&bakiye);
		}
		
		fclose(cfPtr);
	}
	
	
	return 0;
}

