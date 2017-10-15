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
		int a,b;
		cin>>a>>b;
		it =(m.find(b));
		
		if(it!=m.end())
		{
			cout<<a<<" "<<b;
			cout<<endl;
		}
		else{
			m.insert(make_pair(a,b));
		}


	}

}