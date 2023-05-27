#include <iostream>
using namespace std;


int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    
    int arr1[26]={0};
    int arr2[26]={0};
    int arr3[26]={0};
    int arr4[26]={0};
    
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            char ch=s1[i]- 'a';
            arr1[ch]++;
        }
        else if(s1[i]>='A' && s1[i]<='Z')
        {
            char ch= s1[i]- 'A';
            arr2[ch]++;
        }
    }
    
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]>='a' && s2[i]<='z')
        {
            char ch=s2[i]- 'a';
            arr3[ch]++;
        }
        else if(s2[i]>='A' && s2[i]<='Z')
        {
            char ch= s2[i]- 'A';
            arr4[ch]++;
        }
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(arr1[i]<arr3[i] || arr2[i]<arr4[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}