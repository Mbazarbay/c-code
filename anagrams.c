#include <stdio.h>
#include <string.h>

/*This program checks if the two strings are anagrams or not*/
int main (int argc, char **argv)
{
	char arr1[4] = "abcd";
	char arr2[4] = "dcba";

	int size1 = 4; int size2 = 4; int i = 0; int j = 0; int count = 0; 

	if (size1 != size2){
		printf("The length of the two strings are not equal!\n");
		return -1;
	}

	for (i = 0; i < size1; i++){
		for (j = 0; j < size2; j++){
			if (arr1[i] == arr2[j]){
				count++;
			}
		}
	}

	if (count == size1){
		printf("The two strings are anagrams! \n");
	}else{
		printf("The strings are not anagrams \n");
	}
	return 0;
}