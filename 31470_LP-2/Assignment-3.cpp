// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    //selection sort algorithm
   
    for(int i=0;i<n;i++)
    {
        int ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[ind])
            {
                ind=j;
                // cout<<"changed i is "<<i<<" and ind is "<<ind<<endl;
               
            }
        }
        if(ind!=i)
        {
            int temp=arr[i];
            arr[i]=arr[ind];
            arr[ind]=temp;
        }
    }
   
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}