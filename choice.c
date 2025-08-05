#include<stdio.h>
int main()
{
	printf("1.addition");
	printf("\n 2.subtraction");
	printf("\n 3.multipication");
	printf("\n Enter you choice");
	int choice,a,b,ans;
	scanf("%d",&choice);
	printf("\n Enter two numbers");
	scanf("%d%d",&a,&b);
	if(choice==1)
	{
		ans=a+b;
	}
	else if(choice==2)
	{
		ans=a-b;
	}
	else if(choice==3)
	{
		ans=a*b;
	}
	printf("\n%d",ans);
}
