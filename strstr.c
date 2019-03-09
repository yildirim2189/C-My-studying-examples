/* strstr fonksiyonu, ikinci string argumaninin, ilk string argumaninda bulundugu ilk konumu arar. Eger ikinci string ilk string
icinde bulunursa, ilk arguman icindeki stringi gosteren bir gosterici dondurulur. Program , strstr kullanarak "abcdefabcdef"
stringi icinde "def" stringini aramaktadir. */
#include <stdio.h>
#include <string.h>

int main()
{
	const char *string1 = "abcdefabcdef";
	const char *string2 = "def";
	
	printf( "%s%s\n%s%s\n\n%s\n%s%s\n",
	"string1 = ", string1, "string2 = ", string2,
	"string1'in icinde string2'nin karakterleriyle karsilasildigi ",
	"ilk yerden itibaren string1: ",
	strstr( string1, string2 ) );
	return 0;
}
