# include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a, &b, &c);
	printf("%d\n%d\n%d\n%d",((a+b)%c),((a%c)+(b%c)),((a*b)%c),((a%c)*(b%c)) );
	return 0;
}
