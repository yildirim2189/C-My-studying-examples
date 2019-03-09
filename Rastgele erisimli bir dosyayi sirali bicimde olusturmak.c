/* Rastgele erisimli bir dosyayi sirali bicimde olusturmak */

#include <stdio.h>

struct musteriVerisi{
	int hesapNo;
	char soyisim[15];
	char isim[20];
	double bakiye;
};

int main()
{
	int i;
	struct musteriVerisi bosVeri = {0,"","",0.0};
	FILE *cfPtr;
	
	if((cfPtr = fopen("kredi.dat","w")) == NULL )
	printf("Dosya acilamadi.\n");
	else
	{
		for(i=1;i<=100;i++)
		fwrite(&bosVeri, sizeof(struct musteriVerisi),1,cfPtr); /* fwrite, dosyaya bir veri blogu(belli sayida byte) yazar. */
		/* cfPtr ile gosterilen dosyaya sizeof(struct musteriVerisi) boyutundaki bosVeri yapisinin yazdirilmasini saglar. */
		fclose(cfPtr);
	}
	
	return 0;
}
