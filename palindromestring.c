#include <stdio.h>
#include<string.h>
int main(void) {
	char s1[50],s2[50];
	int flag;
	printf("Enter the string\n");
	scanf("%s",s1);
	s2=strrev(s1);
	flag=strcmp(s1,s2);
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

