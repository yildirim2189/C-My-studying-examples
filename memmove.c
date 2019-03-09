/* memmove fonksiyonu, memcpy fonksiyonu gibi ikinci argumaniyla belirtilen nesneden aldigi belli sayidaki karakteri, ilk argumaniyla
gosterilen nesneye kopyalar. Kopyalama islemi, ikinci argumandaki byte'lar once gecici bir karakter dizisine kopyalanip daha sonra da 
bu gecici diziden ilk argumana kopyalaniyormus gibi yapilir. Bu, stringin bir kismindaki karakterlerin ayni stringin baska bir kismina 
kopyalanabilmesini saglar.

*** memmove haricinde kopyalama yapan diger string yonetme fonksiyonlari, kopyalama islemi ayni stringte yapildiginda tanimlanmamis sonuclar verir. ***/
#include <stdio.h>
#include <string.h>
int main()
{
	char x[] = "Home Sweet Home";
	
	printf("%s%s\n",
	"memmove oncesinde x dizisi icerisindeki string : ",x);
	printf("%s%s\n",
	"memmove sonrasinda x dizisi icersindeki string : ",
	memmove(x,&x[5],10) ); /* memmove kullanarak x dizisinin son 10 byte'ýný x dizisinin ilk 10 byte'ýna kopyalar. */
	
	
	return 0;
}
