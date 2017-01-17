#include <stdio.h>
int main(void)
{
    int a[5][5],i,j,space;
    char ch={'*'};
    for(i=0;i<5;i++)
    {
        for(space=0;space<5-i;space++)
        printf(" ");
        for(j=0;j<=i;j++)
        {
            printf("%2c",ch);
        }
        printf("\n");
    }
	return 0;
}

