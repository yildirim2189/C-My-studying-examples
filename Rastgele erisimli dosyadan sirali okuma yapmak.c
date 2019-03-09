/* Rastgele erisimli dosyadan sirali okuma yapmak */

/* fread(&musteri, sizeof(struct musteriVerisi),1,cfPtr); ifadesi,
cfPtr ile belirlenen dosyadan sizeof ile belirlenen sayida byte okur ve bu veriyi musteri yapisina depolar.
Dosyadan okunacak bytelarin konumu dosya pozisyon gostericisi tarafindan belirlenir. fread fonksiyonu,
okunacak elemanlarin sayisi ve okunan elemanlarin depolanacagi diziyi gosteren bir gosterici belirtilerek, diziden sabit boyuttaki
birden cok elemani okumak icin kullanilabilir. Az onceki ifade, bir elemanin okunacagini belirtiyordu. Daha fazla eleman okumak 
icin, okunacak eleman sayisi fread fonksiyonunun ucuncu argumaninda belirtilmelidir.
Bu program, Å"kredi.dat" dosyasindaki her kaydi sirayla okumakta ve her kaydin veri icerip icermedigine karar verip, veri iceren 
kayitlari bicimlendirilmis bir sekilde yazdirmaktadir. feof fonksiyonu dosyanin sonuna ne zaman ulasildigina karar vermektedir 
ve fread fonksiyonu diskteki veriyi musteriVerisi yapisi olan musteri icine aktarir. */

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
	
	if((cfPtr = fopen("kredi.dat","r")) == NULL)
	printf("Dosya acilamadi.\n");
	else
	{
		printf("%-6s%-16s%-11s%10s\n","HspNo","Soyisim","Isim","Bakiye");
		
		while(!feof(cfPtr))
		{
			fread(&musteri,sizeof(struct musteriVerisi),1,cfPtr);
			if(musteri.hesapNo!=0)
			printf("%-6d%-16s%-11s%10.2f\n",musteri.hesapNo,musteri.soyisim,musteri.isim,musteri.bakiye);
		}
		
		fclose(cfPtr);
	}
	
	return 0;
}











