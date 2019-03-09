/* memcpy fonksiyonu, ikinci argumaniyla belirtilen nesneden aldigi belli sayidaki karakteri ilk argumaniyla gosterilen nesneye kopyalar.
Fonksiyon, her tipte nesne icin gosterici alabilir. Fonksiyonun sonucu, eger iki nesne hafizada cakisiyorsa (ayni nesnenin kisimlariysa) belirsizdir. 
Program, memcpy kullanarak s2 dizisindeki stringi s1 dizisine kopyalar. */

#include <stdio.h>
#include <string.h>
int main()
{
	char s1[16];
	char s2[] = "Stringi kopyala";
	
	memcpy(s1,s2,16);
	printf("%s\n%s\"%s\"\n",
	"s2, s1'e memcpy ile kopyalandiktan sonra",
	"s1'in icerigi : ",s1);
	
	return 0;
}
