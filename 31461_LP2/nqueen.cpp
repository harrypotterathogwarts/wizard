#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<char>> board;

bool isSafe(int row, int col)
{
    for (int i = row - 1; i >= 0; i--)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    return true;
}

bool queenPlaced(int row)
{
    if (row == n)
    {
        // print(board);
        // count++;
        return true;
    }

    for (int j = 0; j < n; j++)
    {
        if (isSafe(row, j))
        {
            board[row][j] = 'Q';
            if (queen(row + 1))
            {
                return true;
            }
            board[row][j] = 'x';
        }
    }
    return false;
}

int main()
{
    cout << "Enter the size of the board : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<char>k;
        for (int j = 0; j < n; j++)
        {
            k.push_back('x');
        }
        board.push_back(k);
    }
    if (queen(0))
    {
        cout << "Solution possible" << endl;
        cout << "Chess Board" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "Solution not possible" << endl;
    }
    return 0;
}