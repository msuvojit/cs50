/*
* This program prints all character and their corresponding ascii value
*/

#include<stdio.h>
#include<cs50.h>

int main(void)
{
	printf("capital letter\n");

	//prints all capital character and their ascii value
	for(int i = 65; i < 65 + 26; i++)
		printf("%c: %d\n", (char)i, i);
	
	printf("small letter\n");

	//prints all small character
	for(int i = 97; i < 97 + 26; i++)
		printf("%c: %d\n", (char)i, i);
}
