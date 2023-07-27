#include<stdio.h>
#include<stdlib.h>
int main()
{
char choice;
int x,y;
while(1)
	{
		printf("Enter the operator(+,-,*,/)\n Enter x to exit\n");
		scanf("%c",&choice);
		if(choice=='x')
		{
			exit(0);
		}
		printf("Enter 2 numbers");
		scanf("%d %d",&x,&y);
		switch(choice)
		{
		case '+':printf("%d+%d=%d\n",x,y,x+y);
			break;
		case '-':printf("%d-%d=%d\n",x,y,x-y);
			break;
		case '*':printf("%d*%d=%d\n",x,y,x*y);
			break;
		case '/':printf("%d/%d=%d\n",x,y,x/y);
			break;
		default:printf("Invalid Input\n");
		}
	}
	return 0;
}