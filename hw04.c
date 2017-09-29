#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char str[10];
  char str1[10];
  char str2[20] = "this seems too long";

  /*
    strcpy header:
        char * strcpy(char * destination, const char * source);
	- destination - pointer to the array into which the string is to be 
	copied
	- source - pointer to the array from which the string is to be copied
	    - source is a const char to ensure that the value of the variable 
	    will not be [unintentionally] changed/written to due to this 
	    function
        - copies the string (including the null character) pointed at by source
	into the character array destination
	- returns the char array (i.e. string) destination
   */

  printf("&\"first\" = %p\n", &"first");
  printf("str = %p\n", str);
  printf("str1 = %p\n", str1);
  printf("str2 = %p\n", str2);

  printf("strcpy(str, \"first\") returns %p\n", strcpy(str, "first"));
  printf("strcpy(str1, str) returns %p\n", strcpy(str1, str));

  printf("str: \"%s\"\n", str);
  printf("str1: \"%s\"\n", str1);

  printf("strcpy(str, \"not first\") returns %p\n", strcpy(str, "not first"));
  printf("str: \"%s\"\n", str);

  //----------------what if dest's len < src's len?------------------

  printf("str2: \"%s\"\n", str2);
  printf("strcpy(str1, str2) returns %p\n", strcpy(str1, str2));
  printf("str1: \"%s\"\n", str1);
  
  /* 
     strncpy header:
         char * strncpy(char * destination, const char * source, size_t n);
	 - destination - pointer to the array into which the specified part of 
	 the string is to be copied
	 - source - pointer to the array from which the specified part of the 
	 string is to be copied
	 - n - the number of characters to be copied from source
	     - n is a size_t, which is an unsigned integer type of at least 16 bit used to represent the size of something. It can hold any array index. The return type of sizeof() is compatible with size_t
	     - if the length of source < n, the whole remainder of the 
	     destination (even past the length of source?) will be padded with 
	     null bytes
	 - copies up to n chars from source to destination
	 - returns the char array destination
	 - helpful when there is no null character at the end of the char array
	 - if destination is completely filled, no null character is added
  */

  printf("strncpy(str1, \"first off...\", 5) returns %p\n", strncpy(str1, "first off...", 5));
  printf("str1: \"%s\"\n", str1);

  //--------------when src's len < n-----------------

  printf("strncpy(str, \"new\", 5) returns %p\n", strncpy(str, "new", 5));
  printf("str: \"%s\"\n", str);
  printf("i.e. str: ");
  int i = 0;
  for(; i < 10; i++){
    printf("%c, ", str[i]);
  }
  printf("\n");

  //-------------when n > dest's len---------------

  printf("behavior I didn't figure out yet: \n");

  printf("strncpy(str1, str2, 20) returns %p\n", strncpy(str1, str2, 20));
  printf("str2: \"%s\"\n", str2);
  printf("str1: \"%s\"\n", str1);
  printf("i.e. str1: ");
  for(i = 0; i < 20; i++){
    printf("%c, ", str1[i]);
  }
  printf("\n");
    
  return 0;
}
