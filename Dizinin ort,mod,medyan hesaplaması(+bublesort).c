//MOD MEDYAN ORTALAMA - ANALIZ
#include <stdio.h>
#define SIZE 99		
//fonskiyon prototipleri
void ort(const int answer[]);
void medyan(int answer[]);
void mod(int freq[],const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);
//main start.
int main()
{
	int frekans[10]={0}; // cevaplarin frekansi // hepsi 0 a esitlendi.
	int response[SIZE]={6, 7, 8, 9, 8, 7, 8, 9, 8, 9,			//Anket cevaplari dizisi//
						7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
						6, 7, 8, 9, 3, 4, 8, 7, 8, 7,
						7, 8, 9, 8, 9, 5, 6, 7, 8, 9,
						6, 7, 8, 7, 8, 3, 9, 8, 9, 2,
						7, 8, 9, 8, 9, 1, 9, 7, 5, 3,
						5, 6, 1, 2, 5, 3, 9, 4, 6, 4,
						7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
						7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
						4, 5, 6, 1, 6, 5, 7, 8, 7 };
	ort(response); // ortalama al
	medyan(response); // medyan al
	mod(frekans,response); // mod al
	return 0;
}	
//main end.
//Ortalama al fonk.
void ort(const int answer[])
{
	int j;
	int toplam;
	printf("%s\n%s\n%s\n","*********","  Ortalama","*********");
	for(j=0;j<SIZE;j++)
	toplam+=answer[j];	//hepsi toplandi.
	
	printf("Ortalama = Toplam(%d)/Eleman sayisi(%d) = %.4f\n\n",toplam,SIZE,(double)toplam/SIZE);
}
void medyan(int answer[])
{
	printf("\n%s\n%s\n%s\n","********", " Medyan", "********");
	printArray(answer); // siralanmamis diziyi yazdir.
	bubbleSort(answer); // siralanmamis diziyi sirala.
	printf("\nSiralanmis Dizi :\n");
	printArray(answer); // siralanmis diziyi yazdir.
	printf("\nMedyan siralanmis,%d elemanli  bir dizide %d. elemandir. = %d\n",SIZE,SIZE/2,answer[SIZE/2]);
	
}
void mod(int freq[],const int answer[])
{
	int rating; //1-9 arasi elemanlar(frekans dizisi) icin sayac 
	int j; // 0-98 dizisi sayac
	int h; // grafik cizimi icin sayac
	int largest = 0; //en buyuk frekans (en cok tekrar sayisi)
	int modeValue = 0; // mod degeri
	
	printf( "\n%s\n%s\n%s\n","********", " Mod", "********" );
	/* frekanslari 0 a esitledik */
    for ( rating = 1; rating <= 9; rating++ ) 
    freq[rating] = 0;
   
    for ( j = 0; j < SIZE; j++ ) 
    ++freq[answer[j]];
     /* her cevabin frekansini artirma. */
    
    printf( "%s%11s%19s\n\n%54s\n%54s\n\n","Cevap", "Frekans", "Histogram","1 1 2 2", "5 0 5 0 5" );
    
    for ( rating = 1; rating <= 9; rating++ ) {
	printf( "%8d%11d       ", rating, freq[ rating ] );
	
	if(freq[rating]>largest){
		largest=freq[rating];
		modeValue=rating;
	}
	for ( h = 1; h <= freq[ rating ]; h++ ) 
	printf( "*" );
	
	printf("\n");
	} //end of outer for.
	
	printf("Mod en cok tekrarlanan sayidir. = %d. (%d defa tekrar edildi)",modeValue,largest);
}	// end of function mod.

void bubbleSort( int a[] )
{
	int pass; /* pass counter */
	int j; /* comparison counter */
	int hold; /* temporary location used to swap elements */

	 /* loop to control number of passes */
	for ( pass = 1; pass < SIZE; pass++ ) 
	{
		/* loop to control number of comparisons per pass */
		for ( j = 0; j < SIZE - 1; j++ )
		{
			/* swap elements if out of order */
	 		if ( a[ j ] > a[ j + 1 ] ) 
			{
			hold = a[ j ];
			a[ j ] = a[ j + 1 ];
			a[ j + 1 ] = hold;
			} /* end if */
		} /* end inner for */
	} /* end outer for */
} /* end function bubbleSort */

void printArray( const int a[] )
{
	int j; /* counter */

	/* output array contents */
	for ( j = 0; j < SIZE; j++ ) 
	{
		if ( j % 20 == 0 ) 
		{ /* begin new line every 20 values */
			printf( "\n" );
		} /* end if */
		
	printf( "%2d", a[ j ] );
	} /* end for */
} /* end function printArray */
