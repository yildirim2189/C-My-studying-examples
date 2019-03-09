/* Kredi arastirma programi */
#include <stdio.h>
int main()
{
	int secim, hesap;
	double bakiye;
	char isim[30];
	
	FILE *cfPtr;
	
	if((cfPtr = fopen("musteri.dat","r")) == NULL)
	printf("Dosya acilamadi.\n");
	else
	{
		printf("Seciminiz : \n"
		"1 - Sifir bakiyesi olan hesaplari listele\n"
		"2 - Kredili hesaplari listele\n"
		"3 - Borcu olan hesaplari listele\n"
		"4 - Cikis \n? ");
		scanf("%d",&secim);
		
		while(secim!=4)
		{
			fscanf(cfPtr,"%d%s%lf",&hesap,isim,&bakiye);
			
			switch(secim)
			{
				case 1:
					printf("\nSifir bakiyesi olan hesaplar:\n");
					
					while(!feof(cfPtr))
					{
						if(bakiye==0)
						printf("%-10d%-13s%8.2f\n",hesap,isim,bakiye);
						fscanf(cfPtr,"%d%s%lf",&hesap,isim,&bakiye);
					}
					break;
				case 2:
					printf("\nKredili hesaplarin listesi:\n");
						
					while(!feof(cfPtr))
					{
						if(bakiye<0)
						printf("%-10d%-13s%8.2f\n",hesap,isim,bakiye);
						fscanf(cfPtr,"%d%s%lf",&hesap,isim,&bakiye);
					}	
					break;
				case 3:
					printf("\nBorcu olan hesaplar:\n");
					
					while(!feof(cfPtr))
					{
						if(bakiye>0)
						printf("%-10d%-13s%8.2f\n",hesap,isim,bakiye);
						fscanf(cfPtr,"%d%s%lf",&hesap,isim,&bakiye);
					}	
					break;
			}
			
			rewind(cfPtr);
			printf("\n? ");
			scanf("%d",&secim);
		}
		
		printf("Cikis.\n");
		fclose(cfPtr);
	}
	
	return 0;
}
