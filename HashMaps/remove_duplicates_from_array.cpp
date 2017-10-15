#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	
	map <int ,int> m;
	vector<int> v;

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
			
		}
		else{
			m.insert(make_pair(a,a));
			v.push_back(a);
		}


	}
	vector<int> :: iterator it2 ;
	for(it2=v.begin();it2!=v.end();++it2)
	{
		cout<<*it2<<" ";
	}


}