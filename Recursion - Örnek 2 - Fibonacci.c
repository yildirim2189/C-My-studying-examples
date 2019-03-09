#include <stdio.h> // Recursion Ornek 2 - Fibonacci Serisi
				   // 0,1,1,2,3,5,8,13,21,34,... seklinde bir seridir. Ilk 2 elemani 0 ve 1, digerleri onceki 2 sayinin toplami seklindedir.
				   // Yani fib(0)=0, fib(1)=1, fib(n)= fib(n-1) + fib(n-2)
long fibonacci(long);
int main()
{	
	long sayi,sonuc;
	printf("Bir sayi giriniz : ");
	scanf("%ld",&sayi);
	sonuc = fibonacci(sayi);
	printf("\nFibonacci(%ld) = %ld",sayi,sonuc);
	return 0;
}

long fibonacci(long n)	// cagrilar ussel bir bicimde arttigi icin cok fazla cagri yapilmaktadir. Bu tarz programlardan kacininiz.
{						// Bu da performansi oldukca dusurmektedir. 30. sayi icin 2 uzeri 30 kadar cagri yapilir.
	if(n==0||n==1)
	return n;
	else
	return (fibonacci(n-1)+fibonacci(n-2));
}
