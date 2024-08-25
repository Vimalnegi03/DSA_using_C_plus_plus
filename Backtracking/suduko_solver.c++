#include<bits/stdc++.h>
using namespace std;
bool canWeplace(vector<vector<char>>& board,int row,int col,char num)
{
    for(int j=0;j<9;j++)
    {//no already exist in a row
      if(board[row][j]==num)
      return false;
    }
     for(int j=0;j<9;j++)
    {//no already exist in a col
      if(board[j][col]==num)
      return false;
    }
    //top left corner
    int r=(row/3)*3;
    int c=(col/3)*3;
    for(int i=r;i<(r+3);i++)
    {
      for(int j=c;j<(c+3);j++)
      {
        if(board[i][j]==num)
        return false;
      }
    }
    return true;
}
bool sudoku(vector<vector<char>>& board,int row,int col)
{
    //all column exhausted so change row
    if(col==9)
    return sudoku(board,row+1,0);
    //all row exhausted that means we have completed our sudoku
    if(row==9)
    return true;
    //empty value exist
if(board[row][col]=='.')
{
    //no that can be placed
    for(int num=1;num<=9;num++)
    {//to check whether we can place a specific no. or not
        if(canWeplace(board,row,col,'0'+num))
        {
            board[row][col]='0'+num;
            bool res=sudoku(board,row,col+1);
            if(res)return true;
            board[row][col]='.';

        }
    }
    return false;
}//in case if no. already exist at specific position
else
{
    return sudoku(board,row,col+1);
}

}
    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board,0,0);
    }
int main()
{
    vector<vector<char>>board;
    int n=9;
    
}
