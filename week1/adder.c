#include<cs50.h>
#include<stdio.h>

int main(void)
{
	printf("enter a number : ");
	int a=GetInt();
	printf("enter second number : ");
	int b=GetInt();
	printf("Sum of %d and %d is %d.\n",a,b,a + b);
}
