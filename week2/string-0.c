/*
* This is a simple program to access different string element
*/

#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    //Get user input
    string s = GetString();

    for(int i = 0, n = strlen(s); i < n; i++)
        printf("%c ", s[i]);
    printf("\n");
}
