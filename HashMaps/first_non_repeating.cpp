#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	
	map <int ,int> m;
	typedef map<int,int> mm;
	mm::iterator it;
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		it =(m.find(a));
		
		if(it!=m.end())
		{
			cout<<a<<" ";
			return 0;
		}
		else{
			m.insert(make_pair(a,a));
		}


	}

}