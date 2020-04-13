/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.Find the sum of all the multiples of 3 or 5 below 1000.*/
//Take n=1000 for sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>

int main(void)
{
	int n=10,sum=0,i;
	for(i=1;i<n;i++){
		if((i%3==0)||(i%5==0))
		sum+=i;
	}
	printf("sum = %d",sum);
	return 0;
}