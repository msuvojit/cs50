#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float doller;
    int count=0,amount;
    
    //loop for valid input
    do
    {
        printf("O hai! How much change is owed?\n");
        doller = GetFloat();
    }while(doller <= 0);
    
    //convert doller to integer
    amount=(int)roundf(doller*100);
    
    //check for querter
    count = count + (int)(amount / 25);
    amount = amount % 25;
    
    //check for dimes
    count = count + (int)(amount / 10);
    amount = amount % 10;
    
    //check for nickels
    count = count + (int)(amount / 5);
    amount = amount % 5;
    
    //check for pennies
    count = count + (int)(amount/1);
    amount = amount % 1;
    
    printf("%d\n",count);
}