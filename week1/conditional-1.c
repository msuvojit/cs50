#include<cs50.h>
#include<stdio.h>

int main(void)
{
	printf("enter a number : \n");
	int n=GetInt();
	if(n>0)
	{
		printf("You have entered positive number\n");
	}
	else if(n==0)
	{
		printf("You have entered zero.\n");
	}
	else
		printf("You have entered negative number.\n");
}
