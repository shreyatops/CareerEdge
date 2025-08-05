#include<stdio.h>
int main()
{
//	To check the number is odd or even
	int number;
	printf("Enter a Number!!");
	scanf("%d",&number);
//	if(number%2==0)
//	{
//		printf("NUmber is Even.");
//	}
//	else
//	{
//		printf("Number is Odd.");
//	}
	if(number%5==0)
	{
		printf("Number is divisable.");
		
	}
	else
	{
		printf("Number is not divisable.");
	}

}
