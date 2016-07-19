#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height;
    
    //check user input
    do
    {
        printf("height: ");
        height = GetInt();
    }
    while(height <0 || height > 23);
    
    //create half-pyramid
    for(int i = 0; i < height ; i++)
    {
        for(int j = 0;j <= height ;j++)
        {
            if( j < height - i - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}