/*
* This is a simple example of array declaration
*/

#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(void)
{
	int *x = malloc(sizeof(int) * N);
	for(int i = 0; i < N; i++)
		x[i] = i * i;

	//Now printing the value of the array 
	for(int i = 0; i < N; i++)
		printf("%d %d\n", i, x[i]);
}
