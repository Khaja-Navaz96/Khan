#include<stdio.h>
int main()
{
	int a[10],i,n,key,count=0;
	scanf("%d",&n);
	printf("Input array:\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("Input value:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("Output: %d(the number %d occurs %d times)",key,key,count);
	}
	else
	{
		printf("The element is not found");
	}	
	return 0;
} 
