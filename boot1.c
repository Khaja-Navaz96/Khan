#include <stdio.h>
int main() 
{
    int a[6][6],i,j,k;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((i==j)||(j==0))
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=i+1;
            }
        }
    }
     for(i=0;i<6;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
	return 0;
}
