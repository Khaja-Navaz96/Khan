#include<stdio.h>
int main()
{
    int a[10],n,i,j;
    scanf("%d",&n);
    printf("Input:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n;j++)
        {
            if(i==j)
            {
            continue;    
            }
            else
            {
                printf("%d,%d\n",a[i],a[j]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d,",a[i]);
    }
	return 0;
}
