#include<cs50.h>
#include<stdio.h>

int main(void)
{
	printf("Enter a number between 0 and 10.\n");
	int n=GetInt();
	if(n>=0 && n<=3)
	{
		printf("You have entered a small integer.\n");
	}
	else if(n>3 && n<8)
	{
		printf("You have entered a medium integer.\n");
	}
	else if(n>=8 && n<=10)
	{
		printf("You have entered a big number.\n");
	}
	else
		printf("Please enter a valid integer.\n");
}
