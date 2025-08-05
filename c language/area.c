#include<stdio.h>
int main()
{
	//area of circle
	const float PI=3.14;
	float radius,area;
	printf("enter radius");
	scanf("%f",&radius);
	
	//condition that radius is greater than 0
	if(radius>0)
	{
		area=PI*radius*radius;
    	printf("\n%f",area);
    }
	else
	{
		printf("Invalid radius! Must be greater than 0");
	}
	
	//area of rectangle
	float length,breadth;
	printf("\nenter length and breadth");
	scanf("%f%f",&length,&breadth);

	//condition that length and breadth is greater than 0
	if(length>0 && breadth>0)
	{
		area=length*breadth;
	    printf("\n%f",area);
	}
	else
	{
		printf("Invalid length or breadth! Must be greater than 0.");
	}

	//area of square
	float side;
	printf("\nenter side");
	scanf("%f",&side);
	
	//condition that side is greater than 0
	if(side>0)
	{
    	area=side*side;
    	printf("\n%f",area);	
	}
	else
	{
		printf("Invalid side! Must be greater than 0");
	}
	}
