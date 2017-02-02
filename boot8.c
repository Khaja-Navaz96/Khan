#include<stdio.h>
int main() 
{
	int a[10],temp=0,key,i,n;
	printf("Enter the no. elements:");
	scanf("%d",&n);
	printf("\nEnter the array:");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("\nEnter Search Element:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	    if(a[i]>a[i+1])
	    {
	        temp=a[i];
	        a[i]=a[i+1];
	        a[i+1]=temp;
	        printf("%d",a[i]);
	    }
	    else
	    {
	        printf("%d",a[i]);
	    }
	}
	for(i=0;i<n;i++)
	{
	    if(key==a[i])
	    {
	        printf("\nIndex :%d",i);
	    }
	}
	return 0;
}

