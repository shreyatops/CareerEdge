#include<stdio.h>
int main()
{
	int number;
	printf("Enter a number!");
	scanf("%d",&number);
	if(number%3==0 || number%7==0)
	{
		printf("Number is divisable  by 3 or 7.");
	}
	else
	{
		printf("Number is not divisable by 3 or 7.");
	}
}
