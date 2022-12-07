#include<stdio.h>
int main()
{
	int beg,mid,end,n,key,i;
	printf("enter the size of element\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to search\n");
	scanf("%d",&key);
	beg=0;
	end=n;
	while(beg<=end)
	{
		mid=beg+(end-beg)/2;
		if(arr[mid]==key)
		{
			printf("the position of the searched element is %d",mid);
			break;
		}
		else if(arr[mid]<key)
		{
			beg=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	return 0;
}
