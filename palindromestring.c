#include <stdio.h>
#include<string.h>
int main(void) {
	char string[50],revstring[50];
	int flag;
	printf("Enter the string\n");
	scanf("%s",string);
	strrev(string);
	strcpy(revstring,string);
	flag=strcmp(string,revstring);
	if(flag==0)
	   {
	       printf("The string is a palindrome.");
	   }
    else
	   {
	       printf("The string is not a palindrome.");
	   }
	return 0;
}

