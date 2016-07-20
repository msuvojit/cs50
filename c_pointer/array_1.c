#include<stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    
    printf("size of int : %lu\n", sizeof(int));
    printf("size of array : %lu\n", sizeof(arr));
    printf("size of pointer : %lu\n", sizeof(ptr));
    printf("size of int pointer : %lu\n", sizeof(int *));
}