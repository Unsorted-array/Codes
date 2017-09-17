#include <iostream>
using namespace std;
void substr(char a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<a[k];
			}
			cout<<endl;
		}
	}
}
int main()
{
	char ch[10];
	int n;
	cin>>n;
	cin>>ch;
	ch[n+1]='\0';

	substr(ch,n);
}