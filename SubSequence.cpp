//  Well I finally cracked Recurssion 



#include <iostream>
#include <cstring>
using namespace std;
char Out[100];
void subsequence(char ch[], int InBeg , int outBeg)
{
	if( InBeg >=strlen(ch))
	{
		Out[outBeg]='\0';
		cout<<Out<<endl;
		return ;

	}


	subsequence(ch,InBeg+1,outBeg);
	// two cases 1 a with all subsequencces
	Out[outBeg]=ch[InBeg];

	subsequence(ch,InBeg+1,outBeg+1);

}
int main()
{
	char ch[100];
	cin>>ch;

	subsequence(ch,0,0);


}