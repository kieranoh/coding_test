#include <stdio.h>

void quick_sort(int *arr,int L,int R)
{
	int left = L;
	int right = R;
	int p = arr[(L+R)/2];
	int temp;
	do
	{
		while(arr[left]<p)
		{
			left++;
		}
		while(arr[right]>p)
		{
			right--;
		}
		if(left<=right)
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;			
		}
	}while(left<=right);
	
	if(L<right)
	{
		quick_sort(arr,L,right);
	}
	if(left<R)
	{
		quick_sort(arr,left,R);
	}
}

int binary_search(int *arr,int target, int size)
{
	if(arr[0]>target || arr[size-1] < target)
	{
		
		return 0;
	}
	
	int left = 0;
	int right = size-1;
	int mid;
	
	while(left<=right)
	{
		mid =(left+right)/2;
		if(arr[mid]==target)
		{
			return 1;
		}
		if(arr[mid]<target)
		{
			left = mid+1;
		}
		else
		{
			right = mid-1;
		}
	}
	
	return 0;
	
}

int main()
{
	int n,m;
	int flag=0;
	int arr_n[100000];
	int arr_m[100000]; 
	
	scanf("%d",&n);
	for(int i=0; i<n;i++)
	{
		scanf("%d",&arr_n[i]);
	}
	scanf("%d",&m);
	for(int i=0; i<m;i++)
	{
		scanf("%d",&arr_m[i]);
	}
	
	quick_sort(arr_n,0,n-1);
	
	for(int i = 0; i<m; i++)
	{
		printf("%d\n",binary_search(arr_n,arr_m[i],n));
	}
	
	
	return 0;
}
