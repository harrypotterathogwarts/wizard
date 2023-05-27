#include <bits/stdc++.h>
using namespace std;

//few qs to be answered
//1. how often do you visit office?   op1. almost everyday op2.Mediocre op3. very less  
//2. How many times have you worked in team? op1.Multiple times  op2.mediocre op3.very less
//3. How do you rate overall performace of the employee? op1. Good op2. Better op3. Best


class employee{
    public:
    int productivity_score;
    int attendance_score;
    int overall_performance;


    employee(string n,int i)
    {
        n="";
        i=0;
        productivity_score=0;
        attendance_score=0;
        overall_performance=0;
    }

    void calculateRating()
    {
        int total=0;
        total=(productivity_score+ attendance_score+overall_performance) / 3;
        if(total > 8)
        {
            cout<<"5 star employe!!!"<<endl;
        }
        else if(total>=5 && total<=8)
        {
            cout<<"3 star emplyee!!!"<<endl;
        }
        else if(total >=0 && total<=4)
        {
            cout<<"Poor performance"<<endl;
        }
        else
        {
            cout<<"Best Employee of the Year"<<endl;
        }
    }


    void getdata(string name,int id)
    {
        cout<<"Calculatng prformance rating for employee: "<<name<<" "<<"ID: "<<id<<endl;
        cout<<"Enter the productivity score between range 1-10 ";
        cin>>productivity_score;
        cout<<"Enter the attendance score between range 1-10 ";
        cin>>attendance_score;
        cout<<"Enter the overall score between range 1-10 ";
        cin>>overall_performance;
        calculateRating();
    }


};

int main()
{
    employee obj1("ram",123);
    obj1.getdata("ram",123);
    employee obj2("shyam",245);
    obj2.getdata("shyam",245);
    return 0;

}