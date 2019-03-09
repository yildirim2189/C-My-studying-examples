#include <stdio.h>
int main()
{	
	// ASAL SAYI HESAPLAMASI //
	int i,sayi,x,ctr=0;
	printf("%d\n",2); // 2 manuel olarak yazdirildi.
	for(sayi=2;sayi<=100000;sayi++)   // 2 - 100 000 arasi sayilari kontrol et.
	{
	    for(i=2;i<sayi;i++) // 2 den sayi-1 e kadar mod al.
		{
	   	x=sayi%i;  
	   	if(x==0)	// 2 den sayi-1 e kadar alinan modlar 0 olursa yani tam bolunurse donguden cik, siradaki sayiya gec.
	   	break;
	    }
	   if(x!=0)		// donguden cikisin break ile mi yoksa dongunun tamamlanmasi ile mi oldugunu kontrol eden if.
	   {
	   printf("%d\n",sayi);		//eger x 0 dan farkli ise dongu tamamlanarak cikmistir. sayi asaldir. sayiyi yazdir.
	   ctr++;				// her yazdirilan asal sayi icin sayaca +1
	   }
	}
	printf("%d tane asal sayi var.\n",ctr+1); // 2 yi manuel olarak yazdigimiz icin +1 ekle.
	return 0;
}
