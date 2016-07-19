#include<cs50.h>
#include<stdio.h>

int main(void)
{
	printf("Enter a value : \n");
	float f=GetFloat();
	float c=(5.0/9.0)*(f-32.0);
	printf("Value is %.1f celcius.\n",c);
}
