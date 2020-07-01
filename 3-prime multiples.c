/*The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?*/
//Take long num=600851475143 

#include <stdio.h>
#include <math.h>
int prime(int n){
    int j,count,res;
    for(j=2,count=0;j<=sqrt(n);j++){
		if(n%j==0)
		count++;
	}
	res=(!count)?n:0;
	return res;
}
int main(void)
{
	int i,num=13195;
	for(i=2;i<num;i++){
		if((num%i==0)&&prime(i))
		printf("%d ",i);
	}
	return 0;
}
