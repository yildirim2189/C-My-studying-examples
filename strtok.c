/* strtok fonksiyonu, bir stringi atomlarina ayirmak icin kullanilir. Atom, bosluk ya da noktalama karakterleri gibi sinirlayici bazi
karakterlere kadar olan karakter serileridir. Ornegin, bir satirda her kelime bir atom olarak ve kelimeleri ayiran bosluklar sinirlayici
karakter olarak dusunulebilir. Bir stringi atomlarina ayirmak icin (stringin birden fazla atom icerdigi dusunulurse) strtok fonksiyonu
bircok kez cagirilmalidir. strtok icin yapilan ilk cagri iki arguman alir: Atomlarina ayrilacak string ve atomlari ayiran karakterleri 
iceren baska bir string.
atomPtr = strtok(string, " "); ifadesi, atomPtr'ye string icindeki ilk atomu gosteren bir gosterici atar. strtok fonksiyonunun ikinci argumani
(" "), string icindeki atomlarin bosluklarla ayrildigini gosterir. strtok fonksiyonu, string icinde sinirlayici karakter olmayan ilk karakteri arar.
Bu, ilk atomun basidir. Fonksiyon daha sonra string icindeki diger sinirlayici karakteri bulur ve bu karakteri NULL ('\0') karakter ile degistirir.
Bu, o andaki atomu sonlandirir. strtok fonksiyonu, string içindeki atomdan sonraki karakteri gösteren bir göstericiyi saklar ve o andaki atomu
gösteren bir gösterici döndürür. 	*/
#include <stdio.h>
#include <string.h>
int main()
{
	char string[] = "Bu 6 kelimeden olusam bir cumledir";
	char *atomPtr;
	
	printf("%s\n%s\n\n%s\n",
	"Kelimelerine ayirilacak string : ",string,
	"Kelimeler : ");
	
	atomPtr = strtok(string," ");
	
	while(atomPtr!=NULL)
	{
		printf("%s\n",atomPtr);
		atomPtr = strtok(NULL," ");
	}
	return 0;
}
/* strtok icin yapilan sonraki cagrilar, stringi atomlara bolmeye devam eder. Bu cagrilar ilk arguman olarak NULL icerir. NULL argumani, strtok
fonksiyonuna yapilan cagrilarin stringi atomlarina ayirmaya, en son strtok fonksiyonunda saklanan konumdan devam edilecegini belirtir. Eger strtok
cagrildiginda atom kalmamissa, strtok NULL dondurur. Program, strtok kullanarak "Bu 6 kelimeden olusan bir cumledir" stringini atomlarina ayirir.
Daha sonra her atom ayri ayri yazdirilmaktadir. strtok, girilen stringi degistirmektedir. Bu sebepten, string ileride strtok cagrilarindan sonra
yeniden kullanilacaksa, stringin bir kopyasi olusturulmalidir.
