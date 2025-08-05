#include<stdio.h>
int main()
{
	float a,b,ans;
	printf("Enter two Numbers");
	scanf("%f%f",&a,&b);
	ans=a+b;
	printf("\n a=%f b=%f ans=%f",a,b,ans);	
	ans=a-b;
	printf("\n a=%f b=%f ans=%f",a,b,ans);
	ans=a*b;
	printf("\n a=%f b=%f ans=%f",a,b,ans);
}
