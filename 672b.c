#include<stdio.h>
#include<string.h>
#define ll long long int

int main ()
{
   ll i,m=0,j,n,f;
  scanf("%d",&n);
  char s[n],k[n];
  scanf("%s",s);
  for(i=0;i<n;i++)
  { 
    f=m;
    if(strlen(k)>=26)
    m++;
    for(j=0;j<strlen(k);j++)
    { 
      if(s[i]==k[j])
      m++;
      break;
    }
    if(f==m)
    {
      k[strlen(k)]=s[i];
    }
  }
  printf("%d",m);
}


