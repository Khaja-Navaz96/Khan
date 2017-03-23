#include <stdio.h>
int main(void) 
{
	int a[20],i,j,n,max1=0,max2=0;
	scanf("%d",&n);
	printf("Input:\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		while(a[i]%2==0)
		{
			if(a[i]>max1) 
        {
            max2=max1; 
            max1=a[i]; 
        } 
            else if((a[i]>max2)&&(a[i]!=max1)) 
            max2=a[i]; 
            else if(max1==max2) 
            max2=a[i]; 
			break;
		}
    }
    printf("%d",max2);
    return 0;
}

