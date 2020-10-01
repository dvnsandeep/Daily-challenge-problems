#include<stdio.h>
#include<string.h>
int main()
{	int a,i;
	scanf("%d",&a);
	char arr[a][32];
	for(i=1;i<=a;i++)
	{
		scanf("%s",&arr[i][32]);
	}
	return 0;
}
