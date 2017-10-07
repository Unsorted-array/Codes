#include <iostream>
using namespace std;
bool issorted(int ar[],int n)
{
	if(n<=0)
	{
		return true;
	}
	if(ar[n]>ar[n-1])
	{
		return issorted(ar,n-1);
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
	
	cout<<boolalpha<<issorted(ar,n-1);
}