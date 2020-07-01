/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <stdio.h>
#include <math.h>
int main(void)
{
	int i,count=0,num=9009;
	int *arr=(int*)malloc(20*sizeof(int));
	for(i=2;i<=sqrt(num);i++){
		if(num%i==0){
		   arr[count]=i;
		   count++;
		}
	}
	printf("%d and %d",arr[count-1],num/arr[count-1]);
	return 0;
}
