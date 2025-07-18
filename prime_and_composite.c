/* program to find prime and composite numbers between 1 and a given number*/

#include<stdio.h>
int is_prime(int);
int main(int argc,char *argv[])
{
	int num,prime=0,comp=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("1 - neither prime nor composite\n");
	for(int i=2;i<=num;i++)
	{
		if(is_prime(i)==1)
		{
			 printf("%d - prime\n",i);
			prime++;
		}
		else
		{
			 printf("%d - composite\n",i);
			comp++;
		}
	}
	printf("There were %d prime and %d composite numbers between 1 and %d\n",prime,comp,num);
	return 0;
}
int is_prime(int num)
{
	int factor=0;
	for(int i=1;i<=num;i++) if(num%i==0) factor++;
	if(factor==2) return 1;
	return 0;
}
