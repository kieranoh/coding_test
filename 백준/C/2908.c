#include <stdio.h>

int reverse(int n)
{
	int result;
	result = (n %10) * 100;
	result += ((n/10) % 10) * 10;
	result += ((n/100) % 10);
	return result;
}

int main()
{
	int a,b,result;
	scanf("%d %d",&a,&b);
	a = reverse(a);
	b = reverse(b);
	result = (a>b) ? a:b;
	printf("%d",result);
}
