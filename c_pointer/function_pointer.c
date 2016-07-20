#include<stdio.h>
#include<cs50.h>

int sum(int n1,int n2)
{
    return n1 + n2;
}

int main(void)
{
    int a, b, x, y;
    
    printf("Enter first value: ");
    a=GetInt();
    printf("Enter second value: ");
    b=GetInt();
    
    int (*fp)(int, int);    //function pointer which can point to a function
    fp = &sum;              //fp now points to function sum
    x = (*fp)(a, b);        //calls function sum with argument a and b
    y = sum(a, b);          //calls function sum with argument a and b
    
    printf("Sum calculation using function pointer: %d\n", x);
    printf("Sum calculation using function call: %d\n", y);
}