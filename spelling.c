/*Program to enter the integer and print its spelling*/

// method 1
/*
#include<stdio.h>
#include<string.h>
void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	char arr[10][10];
	int i=0;
	while(num>0)
	{
		int last_digit=num%10;
		switch(last_digit)
		{
			case 0: strcpy(arr[i],"zero"); break;
			case 1: strcpy(arr[i],"one"); break;
			case 2: strcpy(arr[i],"two"); break;
			case 3: strcpy(arr[i],"three"); break;
			case 4: strcpy(arr[i],"four"); break;
			case 5: strcpy(arr[i],"five"); break;
			case 6: strcpy(arr[i],"six"); break;
			case 7: strcpy(arr[i],"seven"); break;
			case 8: strcpy(arr[i],"eight"); break;
			case 9: strcpy(arr[i],"nine"); break;
		}
		num/=10;
		i++;	
	}
	for(int j=i-1;j>=0;j--)
	{
		printf("%s ",arr[j]);
	}
}
*/

// method 2
/*
#include<stdio.h>
#include<string.h>
void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	char spelling[10][8]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	char arr[10][10];
	int i=0;
	while(num>0)
	{
		int last_digit=num%10;
		strcpy(arr[i],spelling[last_digit]);
		num/=10;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		printf("%s ",arr[j]);
	}
}
*/

// method 3
/*
#include<stdio.h>
#include<limits.h>// for INT_MAX
void main()
{
//	printf("%d",INT_MAX);
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	int div=1000000000;
	int main_number_started=0;//false
	while(div>0)
	{
		int x;
		x=num/div;
		if(x!=0)
		{
			main_number_started=1;
		}
		switch(x)
		{
			
			
			case 0:
				if(main_number_started==0)
				{
					break;
					// for removing unnecessary zeroes in the starting
				}
				else
				{
					printf("zero ");
					break;
				}
			case 1: printf("one "); break;
			case 2: printf("two "); break;
			case 3: printf("three "); break;
			case 4: printf("four "); break;
			case 5: printf("five "); break;
			case 6: printf("six "); break;
			case 7: printf("seven "); break;
			case 8: printf("eight "); break;
			case 9: printf("nine "); break;
		}
		num=num%div;
		div/=10;
	}
}
*/

// method 4
#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	char spelling[10][8]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int div=1000000000;
	int main_number_started=0;//false
	while(div>0)
	{
		int x;
		x=num/div;
		if(x!=0)
		{
			main_number_started=1;
		}
		if(main_number_started==1)
		{
			printf("%s ",spelling[x]);
		}
		num=num%div;
		div/=10;
	}
}