#include <stdio.h>
#include <string.h>

/*This program returns the minimum number in the array*/
int main (int argc, char **argv)
{
	int min = 0;
	int arr[8] = {4, 5, 9, 2, 0};
	int j = 0;
	
	min = arr[0];
	
	
	while (j < 5)
	{
		if (arr[j] < min)
		{
			printf("min1: %d\n", min);
			min = arr[j];
			printf("min2: %d\n", min);
		}
		j++;
	}
	printf("The minimum number of the array is: %d\n", min);
	return 0;
}