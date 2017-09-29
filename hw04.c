#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char str[10];
  char str1[10];
  char str2[20];

  /*
    strcpy header:
        char * strcpy(char * destination, const char * source);
	- destination - pointer to the array into which the string is to be 
	copied
	- source - pointer to the array from which the string is to be copied
        - copies the string (including the null character) pointed at by source
	into the character array destination
	- returns the character array (i.e. string) destination
   */

  strcpy(str, "first");
  strcpy(str1, str);

  printf("str: \"%s\"", str);

  /* 
     strncpy header:
     char * strncpy(char * destination, const char * source, size_t n);
  */
    
  return 0;
}
