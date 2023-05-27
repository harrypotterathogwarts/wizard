#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];
    int fin[3][3];
    cout<<"Enter the initial grid elements: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter the final state grid elements: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>fin[i][j];
        }
    }

    int misplace=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]!=fin[i][j])
            {
                misplace++;
            }
        }
    }

    cout<<"Misplace elements are: "<<misplace<<endl;

    return 0;

}