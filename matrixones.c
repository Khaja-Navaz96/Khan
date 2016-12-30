#include <stdio.h>
int main()
{
    int a[5][5],m,n,k,i,j;
    printf("Enter the rows,columns:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the value of k:\n");
    scanf("%d",&k);
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    	    if((i+j)==k)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
            }
        }
    }
    for(i=0;i<m;i++)
    {
    	printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    return 0;
}
