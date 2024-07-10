Program-:write a program to take 2d array as input and print  output

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column;
    cout<<"enter rows and columns"<<endl;
    cin>>row>>column;
    int array[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>array[i][j];
        }
    }
    //displaying the elements of 2D array
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}
