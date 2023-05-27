// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;

bool isSafe(int row , int col )
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(v[row][i]==1 || v[i][col]==1)
        {
            return false;
        }
    }
    //for left corner diagonal
    int i=row;
    int j=col;
    while(i>=0 && j>=0)
    {
        if(v[i][j]==1)
        {
            return false;
        }
        i--;
        j--;
    }
   
    i=row;
    j=col;
    while(i>=0 && j<n)
    {
        if(v[i][j]==1)
        {
            return false;
        }
        i--;
        j++;
    }
   
    return true;
}

bool nQueen(int row, int n)
{
    if(row==n)
    {
        return true;
    }
    for(int i=0;i<n;i++)
    {
        if(isSafe(row,i))
        {
           v[row][i]=1;
           if(nQueen(row+1,n))
           {
               return true;
           }
           v[row][i]=0;
        }
    }
   
    return false;
}

void display()
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
}



int main() {
    int n;
    cout<<"Enter size of chess-board: ";
    cin>>n;
    v=vector<vector<int>> (n,vector<int> (n,0));
    cout<<"answer is\n";
    nQueen(0,n);
    display();
   
    return 0;
}

