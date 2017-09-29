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
	    - course is a const char to ensure that the value of the variable 
	    will not be [unintentionally] changed/written to due to this 
	    function
        - copies the string (including the null character) pointed at by source
	into the character array destination
	- returns the character array (i.e. string) destination
   */

  printf("&\"first\" = %p\n", &"first");
  printf("str = %p\n", str);
  printf("str1 = %p\n", str1);

  printf("strcpy(str, \"first\") returns %p\n", strcpy(str, "first"));
  printf("strcpy(str1, str) returns %p\n", strcpy(str1, str));

  printf("str: \"%s\"\n", str);
  printf("str1: \"%s\"\n", str1);

  printf("strcpy(str, \"not first\") returns %p\n", strcpy(str, "not first"));
  printf("str: \"%s\"\n", str);

  /* 
     strncpy header:
     char * strncpy(char * destination, const char * source, size_t n);
  */
    
  return 0;
}
