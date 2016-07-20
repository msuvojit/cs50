/*
* This porgram is a simple use of command line argument
*/

#include<stdio.h>
#include<cs50.h>

int main(int argc, string argv[])
{
	for(int i = 1; i < argc; i++)
		printf("hello %s\n", argv[i]);
}
