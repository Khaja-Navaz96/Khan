#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,n,j,k;
    char c='*';
    scanf("%d",&n);     
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        	if(i%2!=0)
        	{
	        	if(j==1)
        		{
        		printf("%c",c);
        		}
        		printf("%d",j);
        	}
        	if(i%2==0)
        	{
        		
          	}
        }
        printf("\n");
    }
}
