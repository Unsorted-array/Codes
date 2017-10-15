#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	
	map <int ,int> m;
	typedef map<int,int> mm;
	mm::iterator it;
	int n;
	cin>>n;
	int x;
	cin>>x;
	while(n--)
	{
		int a;
		cin>>a;
		it =(m.find(x-a));
		
		if(it!=m.end())
		{
			cout<<a<<" "<<x-a;
			cout<<endl;
		}
		else{
			m.insert(make_pair(a,a));
		}


	}

}