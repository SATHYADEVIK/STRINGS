#include<stdio.h>
#include<string.h>
int main(void)
{
  char a[100],s;
  int i=0,n,count=0;
  gets(a);
  n=strlen(a);
  printf("\n");
  scanf("%c",&s);
 for(i=n-1;i>=0;i--)
  {
  	if(a[i]==s)
  	{
  	  count++;
  	  printf("%c is found at %d\n",s,i);
  	}
  }
  if(count==0)
  	{
  		printf("The character is not found");
  	}
 
  	
}

  
  
	
