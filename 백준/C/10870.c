#include <stdio.h>
#include <string.h>

int main()
{
	int n,result;
	scanf("%d",&n);
	int fb[n+1];
	memset(fb,-1,(n+1)*sizeof(int));
	
	result = fibo(n,fb);
	printf("%d",result);
	return 0;
	
}

int fibo(int n,int *fb)
{
	
	if(fb[n] == -1)
	{
		if(n == 0)
		{
			fb[n] = 0;
		}
		else if(n ==1)
		{
			fb[n] = 1;
		}
		else
		{
			
			fb[n] = fibo(n-1,fb) + fibo(n-2,fb);
		}
	}
	return fb[n];
}
