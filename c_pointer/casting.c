#include<stdio.h>

int main(void)
{
    int a = 10000;
    int *money = &a;
    char *bags;
    
    //explicitly casting the integer pointer to character pointer
    bags = (char *)money;
    printf("%s\n", bags);
}