#include <stdio.h>
#include <string.h>

/* This program returns the length of the last word in a passed in string
 * It does not matter if the last word was Upper/lowercase */

int LastWord(const char* s) {
    int len = strlen(s),i;
    int counter = 0;

	if (len == 0){ // no string passed in or empty
   		return 0;
     } 
   	for (i = len-1; i >= 0; i--){
     	if (s[i] != ' '){
       		counter++;
          }
       	else{
       		if (counter > 0){// once we reach a space after the wirst word er read
       			return counter;// return its length
       		}
       	}
  	}
   return counter;
}

int main (int argc, char ** argv){
	char* A = "Hello, world";
	int pri = LastWord(A);
	
	printf("%d\n", pri);
}