#include <iostream>
using namespace std;
void pairSum(int ar[],int n,int sum)
{
	int beg =0,end =n-1;
	for(int i=0;i<n;i++)
	{
		if(ar[beg]+ar[end]==sum)
		{
			cout<<ar[beg]<<" "<<ar[end];
			return ;
		}
		if(ar[beg]+ar[end]>sum)
		{
			end--;
		}
		else
		{
			beg++;
		}
	}
}
int main()
{
	int ar[100],n,sum;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cin>>sum;
	pairSum(ar , n,sum);
}