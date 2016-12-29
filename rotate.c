#include<stdio.h>
int main()
{
	int i;int m=0;
	int test_arr[5];
	printf("Enter a 5 digit number:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&test_arr[i]);
	}
	printf("No. of times to rotate:");
	scanf("%d",&m);
	for(i=m;i<5;i++)
	{
		printf("\n%d",test_arr[i]);
	}
	for(i=0;i<=m;i++)
	{
		printf("\n%d",test_arr[i]);
	}
	return 0;
}	
