#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0,i,b;
	char s[15];
	scanf("%s", s);
	b=strlen(s);
	if(b%2 != 0)
		{for(i=0;i<b/2+1;i++)
	{
		if(s[i]!=s[b-i-1])
		{
			a++;
		}
	

	}
		}
	else{
		for(i=0;i<b/2;i++)
	{
		if(str[i]!=s[b-i-1])
		{
			a++;
		}
	



	}
}
if(b%2 != 0 && a==0)
	{
		a++;
	}

	if(a==1 )
	{
		printf("YES");
	}
	else
	{
		printf("NO" );
	}
	return 0;
}
