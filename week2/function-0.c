/*
* This is simple demonstration of function in c
*/

#include<stdio.h>
#include<cs50.h>
#include<string.h>

void PrintName(string);

int main(void)
{
	printf("Your name: ");
	string s = GetString();
	PrintName(s);
}

//simple use of function to print name
void PrintName(string s)
{
	printf("Hello: %s\n", s);
}
