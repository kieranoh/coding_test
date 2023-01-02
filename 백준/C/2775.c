#include <stdio.h>

int main()
{
	int TC,h,w;
	scanf("%d",&TC);
	for(int i = 0; i<TC;i++)
	{
		scanf("%d",&h);
		scanf("%d",&w);
		int house [w];
		for (int n = 0; n < w; n++)
		{
			house[n] = n+1;
		}
		for (int j =0; j < h; j++)
		{
			for (int n = 1; n < w; n++)
			{
				house[n] += house[n-1];
			}	
		}
		printf("%d\n",house[w-1]);
		
		
	}
	
	return 0;
	
}
