#include <stdio.h>

int main()
{
	int x,y,max_x,max_y,min;
	scanf("%d %d %d %d",&x,&y,&max_x,&max_y);
	min = x;
	min = (min > y) ? y: min;
	min = (min > (max_x - x)) ? (max_x - x) : min;
	min = (min > (max_y - y)) ? (max_y - y) : min;

	printf("%d",min);
	return 0;
}
