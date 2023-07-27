#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter value of x");
	scanf("%d",&x);
	printf("\n Enter value of y");
	scanf("%d",&y);
	int temp=x;
	x=y;
	y=temp;
	printf("\n After swapping: x = %d , y = %d",x,y);
	return 0;
}