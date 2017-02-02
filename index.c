#include<stdio.h>
int main() 
{
	int a[10],key,i,n;
	scanf("%d",&n);
	printf("Input\nArray:");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Number to Search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("\nOutput:%d",i);
        }
    }
	return 0;
}

