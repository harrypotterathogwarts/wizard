#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"**************** Welcome to RBI ChatBot **********************"<<endl;
    cout<<"How may I help you?"<<endl;
    char input[128];
    while(1)
    {
        cin>>input;

        if(strcmp(input,"hi")==0)
        {
            cout<<"Hello"<<endl;
        }
        else if(strcmp(input,"bank details")==0)
        {
            cout<<"You can navigate to the navbar to find your bank details!"<<endl;
        }
        else if(strcmp(input,"customer care")==0)
        {
            cout<<"Customer care number is: 020-23456789"<<endl;
        }
        else if(strcmp(input,"bye")==0)
        {
            cout<<"Thank you for using my service!"<<endl;
            exit(0);
        }
    }
}

// void wishme()
// {
//     cout<<"Good Morning!"<<endl;
//     cout<<"How May I help You?"<<endl;
//     string s;
//     locale loc;
//     while(s!="exit")
//     {
//         cin>>s;
//         for(int i=0;i<s.length();i++)
//         {
//             cout << tolower(s[i],loc);
//         }
//             if(s=="hi")
//             {
//                 cout<<"hello there!"<<endl;
//             }
//             if(s=="how are you")
//             {
//                 cout<<"I'm fine! command me something"<<endl;
//             }
//             if(s=="where can I access forms?")
//             {
//                 cout<<"You can access the forms from the menu Form"<<endl;
//             }
//             if(s=="Who made this chatbot?")
//             {
//                 cout<<"Renuka Saraf"<<endl;
//             }
//             else if(s=="exit")
//             {
//                 exit(0);
//             }
//             }
//         }
    
//         // if(s=="")
    

//     int main()
//     {
//         wishme();
//         return 0;
//     }
