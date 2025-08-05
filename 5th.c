#include<stdio.h>
int main()
{
//	this is to calculate simple intrest
//	float principle_amount=10000,rate_of_interest=10,no_of_years=2,interest,total_amount;
//	interest=(principle_amount*rate_of_interest*no_of_years)/100;
//	printf("\n%f")
//	this is to calculate compound intrest
	float p_a,r_o_i,n_o_y,amount,c_i;
	printf("Enter principle amount , rate of interest and No. of years");
	scanf("%f%f%f",&p_a,&r_o_i,&n_o_y);
	amount=p_a*(1+r_o_i/100)*n_o_y;
	printf("%f",amount);
	c_i=amount-p_a;
	printf("\n%f",c_i);
}
