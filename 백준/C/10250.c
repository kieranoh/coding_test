#include <stdio.h>

int main()
{
	int cases,high,width,num,result,floor,room;
	scanf("%d",&cases);
	for(int i = 0; i< cases; i++)
	{
		scanf("%d %d %d",&high,&width,&num);
		floor = (num % high) *100 ;
		room = (num - 1) / high +1;
		if(floor == 0)
		{
			floor = high * 100;	
		}
		result = floor + room;
		printf("%d\n",result);
	}
	
	return 0;
}
