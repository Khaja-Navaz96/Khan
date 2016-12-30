#include<stdio.h>
#include<string.h>
int main()
{
 int i,j=0,len=0;
 char str[100],replaced[100];
 printf("Enter a string : ");
 gets(str);
 len=strlen(str);
 for(i=0; i<=len; i++)
 {
   if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') ||(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]==' '))
   {
     str[i]=' ';
   }
   else
   {
     len++;
     replaced[j++]=str[i];
   }
 }
 replaced[j]='\0';
 printf("Replaced String : %s",replaced);
 return 0;
}
