/* sprintf printf ile denktir, ancak çýktýlar ekran yerine s dizisine gönderilir. ==>  int sprintf(char *s,const char *format,...);
sprintf fonksiyonunu s dizisine ( bir karakter dizisidir ) formatli bir bicimde veri yazmak icin kullanir. Fonksiyon,
printf ile ayni donusum belirteclerini kullanir. Program bir int ve bir double degeri alip, bicimlendirerek s dizisine yazar.
s dizisi, sprintf'in ilk argumanidir. */
#include <stdio.h>
int main()
{
	char s[80];
	int x;
	double y;
	
	printf("integer ve double tipinde deger giriniz :\n");
	scanf("%d%lf",&x,&y);
	sprintf(s,"integer : %6d\ndouble : %8.2f",x,y);
	printf("%s\n%s\n","s dizisinde saklanan cikti :",s);
	return 0;
}
