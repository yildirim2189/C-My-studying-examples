#include <stdio.h>
int main()			
{								// DIAMOND - ELMAS SEKLI CIZEN PROGRAM. Yildirim Bayrakci.
	int a=0,z=0;
	int k, i, b;
	
	for(k=1;k<10;k++)		// satir dongusu 9 satir olacak 1-2-3-4-5-6-7-8-9 Degerleri. '5' degeri orta satir.
	{	
		
		if (k<6)       // IF ELSE BLOKUNUN ANLAMI = En dis for dongusu orta satiri bitirene kadar a,z yi artir --- orta satiri bitince azalt. 
		{
			a++;		// bosluk sayilari satir siralamasina gore 5 4 3 2 1 2 3 4 5 oldugundan orta satirdan sonra yani k=6 olduktan sonra 
			z+=2;		// azaltildi. ayni sekilde yildiz sayilari 1 3 5 7 9 7 5 3 1 oldugundan orta satirdan sonra azaltildi.
		}
		else
		{
			a--;	
			z-=2;		// end of if-else.
		}
		
		for(i=6;i>a;i--)			//bosluk dongusu. satir satir a degerleri: 1,2,3,4,5,4,3,2,1
		{							
			printf(" ");
		}
		

		for(b=1;z>b;b++)			//yildiz dongusu. satir satir z degerleri: 2,4,6,8,10,8,6,4,2
		{
			printf("*");
		}
		
		
		printf("\n");		// her satir bitimi yeni satira gec.

	}	//end of loop "for".

	return 0;
}	// end of main.


