#include <stdio.h>

/*To compile: gcc -o binaySearch binaySearch.c
 *To excute: ./binaySearch*/

/* This program finds a specific number in a list*/
/* Note: in order to perform the binary search, the array must be sorted in advance. */
int main (int argc, char **argv)
{
	int first = 0; int n = 6; int last = n - 1; int arr[6] = {1, 2, 3, 4, 5, 11};
	int middle = (first + last)/2; 
	int search;

	search = 1;
	while (first <= last)
	{
		if (arr[middle] < search)
		{
			first = middle +1;
		}
		else if (arr[middle] == search)
		{
			printf("%d was found at location %d\n",search, middle +1);
			break;
		}
		else
		{
			last = middle - 1;
		}
		middle = (first+last)/ 2;
	}
	if (first > last)
	{
		printf("%d was not found in the list\n", search);
	}
	return 0;
}