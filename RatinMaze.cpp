#include <iostream>
using namespace std;
void inputArr(bool maze[][20],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>maze[i][j];
		}
	}
}
void outputArr(bool maze[][20],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<maze[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool isPlace(bool maze[][20],int i,int j,int n)
{
	if(i<n&&j<n&& maze[i][j]==true)
	{
		return true;
	}
	return false;
}
bool RatInAMaze(bool maze[][20],int i,int j,int n, bool ans[][20])
{
	if(i==n-1&&j==n-1)
	{
		ans[n-1][n-1]=true;
		return true;
	}
	if(isPlace(maze,i,j,n)==true)
	{
		ans[i][j]=true;
		bool right= RatInAMaze(maze,i,j+1,n,ans);
		bool down = RatInAMaze(maze,i+1,j,n,ans);
		if(right==true)
		{
			return true;
		}
		if(down==true)
		{
			return true;
		}
		if(right==false && down == false)
		{
			ans[i][j]=false;
		}
	}
	
		return false;
	
}
int main()
{
	int n;
	cin>>n;
	bool maze[20][20],ans[20][20]={0};
	inputArr(maze,n);
	bool possible = RatInAMaze(maze,0,0,n,ans);
	cout<<endl;
	if(possible)
	{
		cout<<"yay"<<endl;
		outputArr(ans,n);
	}
	else{
		cout<<"No can dos will baby doll !";
	}
}