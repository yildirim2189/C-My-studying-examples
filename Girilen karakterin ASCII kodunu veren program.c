#include <stdio.h>
#include <Conio.h>
#include <stdlib.h>


int main()
{
	int i,j;

printf("\n   \311"); //sol ust kose karakteri

for(i=1;i<113;i++)  // yatay cizgiler (ust kenar)  
{printf("\315");}
						
printf("\273");  //sag ust kose karakteri

for(i=1;i<4;i++) //satirlar = 3 satir
	{
	printf("\n   \272"); //her satir basi boslugu ve dikey cizgi (sol kenar)
	for(j=1;j<113;j++)  // her satir icin kenardan kenara karakterler
		{
			if(i==1)     //1.satir ise (260) karakteri= low noktalar
			{printf("\260");
			}
			else if(i==2)  //2. satir ise 43 defa medium noktalar (261) -- sonra ismim -- sonra medium noktalar 
				{
				if(j<=46)
				printf("\261");
				else if(j==47)
				{printf(" YILDIRIM BAYRAK\200I "); // \200 = 'Ç' karakteri
				j=65;}
				else if(j>=66)
				printf("\261");
				}
		
			else if(i==3)    // 3. satir heavy noktalar (262)
			{printf("\262");}
			
		}
	printf("\272"); // satir sonu ve dikey cizgi (sag kenar)
	}

printf("\n   "); // soldan birakilan bosluk

printf("\310");  // sol alt kose karakteri

for(i=1;i<113;i++) // yatay cizgiler (alt kenar)
printf("\315");		

printf("\274");		// sag alt kose karakteri
	printf("\nBu program klavyeden CTRL+Z girilinceye kadar, girilen karakterlerin ASCII kodunu verir.(Ondal\215k CTRL+Z = 26)\n");  
	printf("Ekran\215 temizlemek i\207in Backspace tu\237una bas\215n\215z.");
//_getche() fonskiyonundan yararlanilmistir. Tek karakter girilir. Enter tusuna basilmasina gerek yoktur.// 
	int c;
	char ctrlz=26;
	char backspace=8;
	while(1)
	{
		printf("\nBir karakter giriniz : ");
		c=_getche();
		if(c==ctrlz)
		break;
		
		printf("\nOndal\215k = %d   16'l\215 = %X   8'li = %o",c,c,c);
		if(c==backspace)
		system("cls");
	}
	return 0;
}
