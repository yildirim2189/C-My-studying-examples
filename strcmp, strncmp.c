/* Program, uc stringi strcmp ve strncmp fonksiyonlarini kullanarak karsilastirmaktadir. strcmp fonksiyonu, ilk argumaninin karakterlerini 
ikinci argumaninin karakterleriyle teker teker karsilastirir. Fonksiyon eger stringler esitse 0 degerini, eger ilk string ikinci stringten
kucukse negatif bir degeri, eger ilk string ikinci stringten buyukse pozitif bir degeri dondurur. 
strncmp, strcmp'ye benzer ancak karsilastirma yalnizca ilk stringteki n karakter icin yapilir. strncmp bir string icinde null karakterden 
sonra gelen karakterleri karsilastirmaz. Program, her fonksiyon cagrisindan dondurulen tamsayi degerlerini yazdirmaktadir/ */

#include <stdio.h>
#include <string.h>
int main()
{
	const char *s1 = "Mutlu Yeni Yillar";
	const char *s2 = "Mutlu Yeni Yillar";
	const char *s3 = "Mutlu Tatiller";
	
	printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
	"s1 = ", s1, "s2 = ", s2, "s3 = ", s3,
	"strcmp(s1, s2) = ", strcmp( s1, s2 ),
	"strcmp(s1, s3) = ", strcmp( s1, s3 ),
	"strcmp(s3, s1) = ", strcmp( s3, s1 ) );
	
	printf("%s%2d\n%s%2d\n%s%2d\n",
	"strncmp(s1, s3, 6) = ", strncmp( s1, s3, 6 ),
	"strncmp(s1, s3, 7) = ", strncmp( s1, s3, 7 ),
	"strncmp(s3, s1, 7) = ", strncmp( s3, s1, 7 ) );
	
	
	return 0;
}
