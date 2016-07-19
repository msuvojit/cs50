#include<cs50.h>
#include<stdio.h>

int main(void)
{
	printf("Please enter a number : \n");
	int n=GetInt();

	switch(n)
	{
		case 1:
		case 2:
		case 3:
			printf("You have entered a small int!\n");
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			printf("You have entered a midium number!\n");
			break;
		case 9:
		case 10:
			printf("You have entered a big number!\n");
			break;
		default:
			printf("You have entered a invalid number!\n");
			break;
	}
}
