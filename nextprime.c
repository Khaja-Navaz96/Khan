#include<stdio.h>
int main()
{
int i,j,t,n;
printf("Input:\n");
scanf("%d",&n);
printf("Output:");
for(i=n+1;1;i++)
{
 for(j=2,t=0;j<=i;j++)
 {
     if(i%j == 0)
       {
          t++;
       }      
 } 
 if(t==1)
 {
  printf("%d",i);
  break;            
 }
}
return 0;
}
