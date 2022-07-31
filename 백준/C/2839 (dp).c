#include <stdio.h>
#include <string.h>
//dp
int main()
{
	int total,result;
	scanf("%d",&total);
	int dp[total+1];
	memset(dp,0,(total +1)*sizeof(int));
	dp[3] = 1;
	dp[5] = 1;
	for(int i = 6;i<=total;i++)
	{
		if(dp[i-3] != 0)
		{
			dp[i] = dp[i-3] +1;
		}
		if(dp[i-5] != 0)
		{
			dp[i] = (dp[i] != 0) ? ((dp[i] < dp[i-5]+1) ? dp[i] : dp[i-5]+1)  : dp[i-5] +1; 
		}
	}
	result = (dp[total] != 0 ) ? dp[total] : -1;
	printf("%d",result);
	return 0;
}
