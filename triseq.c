#include <stdio.h>
int main(void) 
{
	int i,n,sum=0;
	printf("Input:");
	scanf("%d\n",&n);
	printf("Output:");
	for(i=1;i<=n;i++)
	{
	    sum=(i*(i+1)/2);
	    printf("%d\t",sum);
	}
	return 0;
}
