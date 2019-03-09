/* strrchr fonksiyonu, karakterin belirlenen string icindeki son konumunu bulur. Eger karakter bulunursa, strrchr string icindeki 
karakteri gosteren bir gosterici dondurur. Aksi takdirde, strrchr NULL dondurur. Program, 'z' karakterinin Å"A zoooo asmnu ahgl wudhu zktr" 
stringi icindeki son konumunu arayan bir program gostermektedir. */

#include <stdio.h>
#include <string.h>
int main()
{
	const char *string1 = "A zoooo asmnu ahgl wudhu zktr";
	int c = 'z';
	
	printf("%s%s\n'%c'%s %s\"%s\"\n",
	"string1 = ",string1,
	c," karakterinin son gorundugu yerden",
	"itibaren string1 = ",
	strrchr(string1,c));
	
	return 0;
}
