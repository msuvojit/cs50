/*
* This program implements a simple function to get positive int from user
*/

#include<stdio.h>
#include<cs50.h>

int GetPositiveInt(void);

int main(void)
{
	int n = GetPositiveInt();
	printf("Thanks for %i\n", n);
}

//this function implement positive int function
int GetPositiveInt(void)
{
	int n;
	do
	{
		printf("Give me a positive int: ");
		n = GetInt();
	}
	while(n < 1);
	return n;
}
