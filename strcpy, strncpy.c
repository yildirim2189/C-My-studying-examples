/* char *strcpy (char *s1,const char *s2) => s2 stringini s1 dizisi içine kopyalar,s1‘in deðeri döndürülür.
	char *strncpy(char *s1,const char *s2,size_t n) => s2 stringinin en fazla n karakterini s1 dizisi içine kopyalar.s1‘in deðeri döndürülür.
	Program, strcpy kullanarak x dizisi icindeki stringi y dizisi icine kopyalamakta ve strncpy kullanarak x dizisinin
	ilk 14 karakterini z dizisine eklemektedir. z dizisine null karakter eklenmistir cunku programda strncpy fonksiyonuna	
	yapilan cagri, sonlandirici null karakteri eklememektedir.( Ucuncu arguman ikinci argumandaki stringin uzunlugundan kucuktur.) */

#include <stdio.h>
#include <string.h>
int main()
{
	char x[] = "Dogum gunun kutlu olsun";
	char y[25],z[15];
	
	printf("%s%s\n%s%s\n",
	"x dizisindeki string : ",x,
	"y dizisindeki string : ",strcpy(y,x));
	
	strncpy(z,x,11);
	z[11]='\0';
	printf("z dizisindeki string : %s\n",z);
	
	return 0;
}	

  
