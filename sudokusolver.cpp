// lets  see if i can solve the classical newspaper problem sudoku solver with recursion !
#include <iostream>
using namespace std;
void placeNumber(int grid[][9],int i,int j)
{
		for(int k=1;k<=9;k++)
		{
			if(placeRow(grid,i,j,k)&&placeCol(grid,i,j,k)&&placeMatrix(grid,i,j,k))
			{
				grid[i][j]=k;

				if(SolveSudoku(grid)==true)
				{
					return true;
				}
				else
				{
					grid[i][j]=0;
				}

			
			}

		}
		return false;

}
bool placeRow(int grid[][9],int row,int col,int k)
{
	for(int i=0;i<9;i++)
	{
		if(grid[row][i]==k)
		{
			return false;
		}
	}
	return true;
}
bool placeCol(int grid[][9],int row,int col,int k)
{
	for(int i=0;i<9;i++)
	{
		if(grid[i][col]==k)
		{
			return false;
		}
	}
	return true;
}
bool placeMatrix(int grid[][9],int row,int col,int k)
{
	int right= 2 - col%3;
	int down = 2 - row%3;
	int up = row%3;
	int left= col%3;

}
bool SolveSudoku(int grid[9][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(grid[i][j]==0)
			{
				placeNumber(grid,i,j);	
			}
		}
	}
}

//int grid[9][9]
void printGrid(int ar[9][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
    // 0 means unassigned cells
    int grid[9][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    if (SolveSudoku(grid) == true)
          printGrid(grid);
    else
         printf("No solution exists");
 
    return 0;
}