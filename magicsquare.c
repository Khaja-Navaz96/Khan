#include <stdio.h>
int main()
{
   int n,i,j,a[99][99],r=0,c;
   printf("Enter order N:\n");
   scanf("%d",&n);
   c = (n-1)/2;  
   a[r][c]=1;
   for(i=2;i<=n*n;i++)
   {
	    r = (r+n-1)%n; 
		  c = (c+1)%n;    
		if(a[r][c] != 0)
		{
		    r = (n+r+2)%n;
			c = (n+c-1)%n;
	    }
			a[r][c]=i; 
   }
	for (i=0;i<n;i++) 
	{                                                    
          for (j=0;j<n;j++) 
          {                                                 
            printf("%d\t",a[i][j]);                                           
          }                                                                         
		  printf("\n");                                                             
    }                                                                             
	return 0;                                                                     
}  
