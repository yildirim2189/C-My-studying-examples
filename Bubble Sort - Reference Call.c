/*Bubble Sort - Reference call. - Referansa gore cagirma	*/
#include <stdio.h>
#define SIZE 10 /* Dizi boyutu*/

void bubbleSort(int * const array,const int size); /*Prototip.*/

int main()
{
	int a[SIZE]={76,2,12,54,17,38,55,69,86,9}; /*Dizi tanimi*/
	
	int i; /*sayac*/
	printf("Dizi elemanlari orijinal sira : \n");
	
	for(i=0;i<SIZE;i++)	/*Dizi elemanlarini yazdir.*/
	printf("%d  ",a[i]);
	
	bubbleSort(a,SIZE); /*Diziyi siralamasi icin fonksiyon cagirildi.*/
	
	printf("\n\nDizi elemanlari siralanmis hali : \n");
	
	for(i=0;i<SIZE;i++)	/*Dizi elemanlarini yazdir.*/
	printf("%d  ",a[i]);
	printf("\n");
	return 0;	/*main sonu*/
}

void bubbleSort(int * const array, const int size)  /*	int array[] = int *array parametreleri aynidir. Yerlerine kullanilabilir.*/
{	/* size en az yetki prensibi amaciyla const tanimlanmistir */
	void swap(int *eleman1Ptr,int *eleman2Ptr); /*Prototip.Burada tanimlandigi icin = Sadece  bubbleSort tarafindan cagirilabilir.*/
	int tur;	/*tur sayaci*/ 
	int j;		/*karsilastirma sayaci*/
	
	for(tur=0; tur<size-1; tur++)
	{
		for(j=0; j<size-1; j++)
		{
			if(array[j]>array[j+1]) /*eleman bir sonrakinden buyukse yer degistir.*/
			swap(&array[j],&array[j+1]);
		} 
	}	
}	/*Fonksiyon sonu*/

void swap(int *eleman1Ptr,int *eleman2Ptr)		/*Yer degistir fonksiyonu*/
{
	int gecici = *eleman1Ptr;
	*eleman1Ptr = *eleman2Ptr;
	*eleman2Ptr = gecici;
}






