#include<stdio.h>

int main(void)
{
    int array[5];           //declares 5 consicutive integer
    int *ptr = array;       //array can be used as pointer
    ptr[0] = 1;             //ponter can be index as array syntax
    *(array + 1) = 2;       //array can be dereference be pointer syntax
    *(2 + array) = 3;       //pointer addition is commutative
    3[array] = 4;           //array operation is commutative
    
    for(int i = 0; i < 5; i++)
        printf("%d ", array[i]);
    printf("\n");
}