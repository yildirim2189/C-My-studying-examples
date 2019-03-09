/* sscanf ==> int sscanf (char *s,const char *format,...);
	scanf ile denktir,ancak girdiler klavye yerine s dizisinden okunur.
	sscanf fonksiyonunu s karakter dizisinden bicimlendirilmis verileri okumak icin kullanir. Fonksiyon, scanf ile ayni donusum 
	belirteclerini kullanir. Program, s dizisinden bir int ve bir double deger okur ve okudugu degerleri sirasiyla x ve y 
	degiskenleri icinde tutar. x ve y degerleri daha sonra yazdirilir. s dizisi, sscanf'in ilk argumanidir. */
	
#include <stdio.h>
int main()
{
	char s[] = "31298 87.375";
	int x;
	double y;
	
	sscanf(s,"%d%lf",&x,&y);
	printf("%s\n%s%6d\n%s%8.3f\n",
	"s karakter dizisinden okunan degerler :",
	"integer :",x,"double :",y );
	
	
	return 0;
}
