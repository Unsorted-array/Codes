//mastered recursion i feel like very good problem took a lot of time 

#include <iostream>
#include <cstring>
using namespace std;
int count=1;
void printPermutation(char str[],int beg,int n)
{
	//cout<<"here"<<endl;
	if(beg>=n){
		cout<<count++<<" "<<str<<endl;
		return;
	}
	for(int i=beg;i<=n;i++)
	{
		swap(str[beg],str[i]);
		printPermutation(str,beg+1,n);
		swap(str[beg],str[i]);
	}
}
int main()
{
	char str[100];
	cin>>str;
	printPermutation(str,0,strlen(str)-1);
}