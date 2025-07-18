// method 1
#include<stdio.h>
int main(int argc,char *argv[])
{
	int num;
	int first=0,second=1,third;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Here are %d numbers in fibonacci series!\n\n",num);
	if(num>2)
	{
		printf("%d\n%d\n",first,second);

		for(int i=1;i<=num;i++)
		{
			third=first+second;
			printf("%d\n",third);
			first = second;
			second = third;
		}
	}
	else
	{
		printf("%d\n%d\n",first,second);
	}
	return 0;
}
