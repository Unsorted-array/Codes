//n-queen problem it took a hell lot of time and i am not able to understand why am i not that happy !
#include <iostream>
using namespace std;
void set_the_map(char board[1000][1000],int n,char ch)
{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{

				board[i][j]='x';
			}
		}


}
void get_the_map(char board[1000][1000],int n)
{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{

				cout<<board[i][j]<<"  ";
			}
			cout<<endl;
		}


}
bool canPlace(char board[1000][1000],int row,int col,int n)
{
	for(int i=0;i<n;i++)
	{
		if(board[i][col]=='Q'|| board[row][i]=='Q')
		{
			return false;
		}

		int RowInc[]={-1,-1,1,1};
		int colInc[]={-1,1,1,-1};
		for(int i=0;i<4;i++)
		{
			int curRowInc = RowInc[i];
			int curColInc = colInc[i];

			int starti=row;
			int startj=col;

			while(starti>=0&&startj<n &&starti<n&&startj>=0 )
			{
				if(board[starti][startj]=='Q')
				{
					return false;
				}
				starti+=curRowInc;
				startj+=curColInc;
			}
		}
	}
	return true;


}
bool PlaceQueen(char board[1000][1000],int crow,int n)
{
	if(crow==n)
	{
		return true;
	}
	for(int c=0;c<n;c++)
	{
		if(canPlace(board,crow,c,n)==true)
		{
			board[crow][c]='Q';

			if(PlaceQueen(board,crow+1,n))
			{
					return true;
			}
			board[crow][c]='x';
		}
	}
	return false;

}
int main()
{
	int n;
	cin>>n;
	char board[1000][1000];
	set_the_map(board,n,'R');

	bool ispossible = PlaceQueen(board,0,n);

	if( ispossible ==true)
	{
		get_the_map(board,n);
	}
	else
	{
		cout<<"\n No can do this will baby doll !";
	}


}