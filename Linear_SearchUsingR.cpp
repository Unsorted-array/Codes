#include <iostream>
using namespace std;
bool mysearch(int ar[],int n,int ele)
{
	if(n<0)
	{
		return false;
	}
	else if(ar[n]==ele)
	{
		cout<<n<<" ";
		return true;
	}
	return mysearch(ar,--n,ele);
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
	cout<<boolalpha<<mysearch(ar,n-1,ele);
}