#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int a = 5;
    int *ptr = NULL;
    
    ptr = &a;
    printf("Derefencing : %d\n", *ptr);
}