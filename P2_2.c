/*P2.2 Program to find the largest and smallest number in an array*/
#include<stdio.h>
#include<conio.h>
int main( )
{
	int i,arr[10]={ 2, 5, 4, 1, 8, 9, 10, 6, 3, 7 };
	int small, large;
	small = large = arr[0];
	for(i=1; i<10; i++)
	{
		if(arr[i] < small)
			small = arr[i];
		if(arr[i] > large )
			large = arr[i];
	}
	printf("Smallest = %d, Largest = %d\n", small, large);
	getch();
}
