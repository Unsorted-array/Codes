//time complexity of this code is :-O(logn)
#include <iostream>
using namespace std;
bool myBsearch(int ar[],int beg,int end,int ele)
{
	while(beg<=end)
	{
		int mid = (beg+end)/2;
		if( ar[mid]==ele)
		{
			cout<<mid<<"";
			return true;
		}
		if(ar[mid]>ele)
		{
			return myBsearch(ar,beg,mid-1,ele);
		}
		else{
			return myBsearch(ar,mid+1,end,ele);
		}
	}
	return false;
}
int main()
{
	int n;
	int ar[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int ele;
	cin>>ele;
	cout<<boolalpha<<myBsearch(ar,0,n-1,ele);
}
