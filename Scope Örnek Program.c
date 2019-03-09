#include <stdio.h>  // Scope Example Program -  Yildirim Bayrakci

void a(void);	// fonksiyon prototipi
void b(void);	// fonksiyon prototipi
void c(void);	// fonksiyon prototipi
int d (int);	// 	"" 			""

int x = 1; 		// Global degisken

int main()
{
	int x = 5; // Main yerel degiskeni
	printf("Faaliyet alani disindaki main yerel x degiskeni = %d\n",x);
	{	// Faaliyet alani basla.
		int x = 7; // yerel x degiskeni
		printf("Faaliyet alani icindeki yerel x degiskeni = %d\n",x);	
	}	// Faaliyet alani bitir.
	printf("Faaliyet alani disindaki main yerel x degiskeni = %d\n",x);
	a();		// her fonksiyon 3 er defa cagrilmistir.
	b();
	c();
	d(x);
	a();
	b();
	c();
	d(x);
	a();
	b();
	c();
	d(x);
	printf("Faaliyet alani disindaki main yerel x degiskeni = %d\n",x);
	return 0;
}
void a(void)
{
	int x = 25; // Otomatik bir x yerel degiskeni. Her cagrildiginda deger yeniden atanir. Degerini korumaz.
	printf("a fonksiyonuna girerken auto yerel x degiskeni = %d\n",x);
	++x;
	printf("a fonksiyonundan cikarken yerel x degiskeni = %d\n",x);
}
void b(void)
{
	static int x = 50; // Statik bir yerel x degiskenine ilk deger atama. Fonksiyondan ciktiktan sonra da degerini korur.
	printf("b fonksiyonuna girerken static yerel x degiskeni = %d\n",x);
	++x;
	printf("b fonksiyonundan cikarken yerel x degiskeni = %d\n",x);
}
void c(void)		// yerel x tanimi yoktur. Bu yuzden global x degiskenini kullanir. Degerini korur. Statik depolama.
{			
	printf("c fonksiyonuna girerken global x degiskeni = %d\n",x);
	x = x*10;
	printf("c fonksiyonundan cikarken global x degiskeni = %d\n",x);
}
int d(int x)
{
	printf("d fonksiyonuna girerken x parametresi = %d\n",x);
	x = x*10;
	printf("d fonksiyonundan cikarken  x parametresi = %d\n",x);
	return x;
}









