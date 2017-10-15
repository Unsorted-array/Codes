#include <iostream>
#include <queue>
using namespace std;
class compare{
public:
	bool operator ()(const int &a,const int &b)
	{
		// if b should come at last
		return (a>b);
	}

};
class compare2{
public:
	bool operator ()(const int &a,const int &b)
	{
		// if b should come at last
		return (a<b);
	}

};
int main()
{
	int n;
	
	int k,count =0;
	cin>>k;
	priority_queue<int ,vector<int>,compare2> p;

	while(1)
	{
		cin>>n;
		if(n==-1)
		{
			cout<<p.top()<<endl;
			break;
		}
		if(count < k)
		{
			p.push(n);
			cout<<p.top()<<"push"<<endl;
			count++;
		}
		else
		{
			cout<<p.top()<<"pop"<<endl;
			p.pop();
			p.push(n);
		}
		
	}

	return 0;
}