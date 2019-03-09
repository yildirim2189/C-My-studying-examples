/* Bir stringi dizi gosterimi ve gostericileri kullanarak kopyalamak------- Yildirim BAYRAKCI */
#include <stdio.h>
/*En az yetki prensibi: kopya fonksiyonlari 2. argumani 1.argumana kopyalamaktadir. Fonksiyonlarin
2. argumani degistirmesine gerek yoktur. Bu yuzden bunu yapabilmeleri engellenmistir. */
void kopya1(char*,const char*);
void kopya2(char*,const char*);

int main()
{
	char string1[10];
	char *string2 = "Merhaba";
	char string3[10];
	char string4[] = "Gule gule";
	
	kopya1(string1,string2); /*string2 yi string1 e kopyala (dizi gosterimi)*/
	printf("string1 = %s\n",string1);
	
	kopya2(string3,string4); /*string4 u string3 e kopyala (pointer gosterimi)*/
	printf("string3 = %s\n",string3);
	
	return 0;
}

void kopya1(char *s1,const char *s2)
{
	int i;	
	for(i=0; (s1[i]=s2[i])!='\0' ;i++ ) /* Dizi belirteci */
	;	/*atama ifadesinin degeri sol tarafa atanan degerdir.*/
}

void kopya2(char *s1,const char *s2)
{
	for( ; (*s1 = *s2)!='\0' ; s1++,s2++ )	/* Pointer */
	;	
}
