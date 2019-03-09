/* Rastgele erisimli bir dosyaya rastgele veri yazmak */

/* fseek(cfPtr, (musteri.hesapNo-1)*sizeof(struct musteriVerisi),SEEK_SET); ifadesi,
cfPtr ile belirlenen dosyadaki dosya pozisyon gostericisini (musteri.hesapNo-1)*sizeof(struct musteriVerisi) ile
hesaplanan byte konumuna tasir. Bu deyimin degeri genellikle offset ya da yer degistirme olarak bilinir. Byte konumlari
0 ile basladigindan ve hesap numaralari 1 ile 100 arasinda oldugundan, hesap numarasindan 1 cikartilir. SEEK_SET sembolik sabiti
dosya pozisyon gostericisinin, yer degistirmesinin dosya basindaki konumdan itibaren yapilacagini belirtir.
int fseek(FILE *stream, long int offset, int whence); fseek prototipi..
offset, stream ile belirtilen dosyadaki whence konumundan itibaren byte sayisidir.
whence argumani; SEEK_SET, SEEK_CUR, SEEK_END degerlerinden birini alabilir.
SET:aramanin dosya basindan, CUR o anki konumdan, END dosya sonundan baslanacagini belirtir. (stdio icinde tanimlidirlar.) */

#include <stdio.h>

struct musteriVerisi{
	int hesapNo;
	char soyisim[15];
	char isim[10];
	double bakiye;
};

int main()
{
	FILE *cfPtr;
	struct musteriVerisi musteri = {0,"","",0.0};
	
	if((cfPtr = fopen("kredi.dat","r+")) == NULL)
	printf("Dosya acilamadi.\n");
	else
	{
		printf("Hesap numarasini giriniz : "
		" (1 den 100'e kadar, cikis icin 0) \n? ");
		scanf("%d",&musteri.hesapNo);
		
		while(musteri.hesapNo!=0)
		{
			printf("soyisim, isim, bakiye giriniz : \n? ");
			fscanf(stdin,"%s%s%lf",musteri.soyisim,musteri.isim,&musteri.bakiye);
			fseek(cfPtr,(musteri.hesapNo-1)*
				sizeof(struct musteriVerisi),SEEK_SET);
			fwrite(&musteri,sizeof(struct musteriVerisi),1,cfPtr);
			printf("Hesap numarasini giriniz : \n? ");
			scanf("%d",&musteri.hesapNo);
		}
		 
		fclose(cfPtr);
	}
	
	return 0;
}
