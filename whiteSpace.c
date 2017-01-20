#include <stdio.h>
#include <string.h>

/*This program replaces every white space with '%20' */
int main (int argc, char ** argv)
{
	int i = 0; int j = 0; char arr[27] = "Hello world this is a test";

	j = strlen(arr);
	int count = 0;
	for (i = 0; i < j; i++)
	{
		if (arr[i] == ' '){
			count++;
		}
	}

	int newlen = j + count * 2; 
	arr[newlen] = '\0';

	for (i = j -1 ; i >= 0; i--)
	{
		if (arr[i] == ' '){
			arr[newlen - 1] = '0';
			arr[newlen - 2] = '2';
			arr[newlen - 3] = '%';
			newlen = newlen - 3; 
		}
		else {
			arr[newlen - 1] = arr[i];
			newlen = newlen - 1;
		}
	}

	for (i = 0; i < 40; i++){
		printf("%c", arr[i]);
	}
	printf("\n");

	return 0;
}