// stdlib.h = strtod, strtol, strtoul fonksiyonlari

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* strtod fonksiyonu, ondalikli bir degeri temsil eden karakterleri double degere donusturur. Fonksiyon iki arguman alir;
	bir string (char*) ve bu stringi gosteren bir gosterici (char**). String, double'a donusturulecek karakterleri icerir. 
	Gosterici, stringin donusturulmus kismindan sonraki ilk karakterin konumuna atanir.
	d = strtod(string, &stringPtr);
	ifadesi, d'nin stringten donusturulen double degere atandigini ve stringPtr'nin donusturulen degerden sonra, string icindeki
	ilk karakterin konumuna atandigini gosterir. */
	double d;
	const char *string1 = "51.2% kabul edildi.";
	char *string1Ptr;
	
	d = strtod (string1,&string1Ptr);
	printf("string : \"%s\"\n",string1);
	printf("double %.2f ve string \"%s\"e donusturuldu.\n ", d,string1Ptr);
	
	/* strtol fonksiyonu, bir tamsayiyi temsil eden karakterleri long'a donusturur. Fonksiyon uc arguman almaktadir ;
	bir string (char *), stringi gosteren bir gosterici ve bir tamsayi. String, donusturulecek karakter dizisini icermektedir. 
	Gosterici, stringin donusturulen kismindan sonraki ilk karakterin konumuna atanir. Tamsayi, donusturulen degerin tabanini belirtir.
	x = strtol(string, &kalanPtr,0); 
	ifadesi, x'in stringten donusturulen long degere atandigini gosterir. ikinci arguman, kalanPtr, donusumden sonra stringin kalanina 
	atanmistir. Ikinci arguman icin NULL kullanmak, stringin geri kalaninin ihmal edilmesini saglar. Ucuncu arguman, 0, donusturulecek 
	degerin sekizlik (8 taban.), onluk (10 taban.) ya da onaltilik sistemde (16 taban.) olabilecegini gosterir. Taban 0 ya da 2-36 arasinda
	herhangi bir deger olarak belirtilebilir.  11 tabanindan 36 tabanina kadar olan tamsayilarin numerik temsilleri, 10-35 degerleri icin 
	A-Z karakterlerini kullanir. Ornegin, onaltilik sistemler 0-9 rakamlarini ve A-F karakterlerini icerebilir. 11 tabanindaki bir tamsayi,
	0-9 rakamlarini ve A karakterini icerebilir. 24 tabanindaki bir tamsayi, 0-9 rakamlarini ve A-N karakterlerini icerebilir. 36 tabanindaki
	bir tamsayi, 0-9 rakamlarini ve A-Z karakterlerini kullanir. */
	long x;
	const char *string2 = "-1234567abc";
	char *kalanPtr;
	
	x = strtol(string2,&kalanPtr,0);
	printf("\n\n\n\n%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
	"Orijinal string: ", string2, 
	"Donusturulen deger : ", x,
	"Orijinal stringden geriye kalan: ",
	kalanPtr,
	"Donusturulen deger arti 567: ", x + 567 );
	
	/* strtoul fonksiyonu, unsigned long tamsayilari temsil eden karakterleri unsigned long'a cevirir. Bu fonksiyon, strtol fonksiyonuyla
	es bir bicimde calismaktadir.
	y = srtroul(string3, &kalanPtr3,0);
	ifadesi y'nin string3'ten donusturulen degere atandigini belirtir. Ikinci arguman, &kalanPtr3, donusumden sonra string'in kalanina 
	atanmaktadir. Ucuncu arguman, 0, donusturulecek degerin sekizlik, onluk ya da onaltilik sistemde olabilecegini belirtir. */
	unsigned long y;
	const char *string3 = "1234567abc";
	char *kalanPtr3;
	
	y = strtoul(string3,&kalanPtr3,0);
	printf("\n\n\n\n%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
	"Orijinal string: ", string3,
	"Donusturulen deger: ", y,
	"Orijinal stringden geriye kalan: ",
	kalanPtr3,
	"Donusturulen deger eksi 567: ", y - 567 );
	
	
	
	return 0;
}
