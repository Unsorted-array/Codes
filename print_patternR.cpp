#include <iostream>
using namespace std;

void printRInc(int n)
{
	if(n<1)
	{
		return ;
	}
	cout<<n;
	printRInc(--n);
}
void PrintRdec(int n)
{
	if(n<1)
	{
		return ;
	}
	
	PrintRdec(n-1);
	cout<<n;
}
int main()
{
	int n;
	cin>>n;
	printRInc(n);
	cout<<endl;
	PrintRdec(n);
}