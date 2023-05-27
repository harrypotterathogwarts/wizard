#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
public:
    string name;
    int age;
    double salary;

    Employee(string name, int age, double salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
};

class Evaluation {
public:
    Employee* employee;
    int productivityScore;
    int attendanceScore;
    int attitudeScore;

    Evaluation(Employee* employee, int productivityScore, int attendanceScore, int attitudeScore) {
        this->employee = employee;
        this->productivityScore = productivityScore;
        this->attendanceScore = attendanceScore;
        this->attitudeScore = attitudeScore;
    }

    double getAverageScore() {
        return (productivityScore + attendanceScore + attitudeScore) / 3.0;
    }

    string getRating() {
        double averageScore = getAverageScore();
        if (averageScore >= 8.0) {
            return "Excellent";
        }
        else if (averageScore >= 6.0) {
            return "Satisfactory";
        }
        else {
            return "Needs Improvement";
        }
    }
};

vector<Employee*> employees = {
    new Employee("John Doe", 30, 45000),
    new Employee("Jane Smith", 25, 35000),
    new Employee("Bob Johnson", 35, 55000)
};

vector<Evaluation*> evaluations;

void evaluateEmployee() {
    string name;
    int productivityScore;
    int attendanceScore;
    int attitudeScore;
    cout << "Enter the employee's name: ";
    getline(cin, name);
    bool employeeFound = false;
    for (Employee* employee : employees) {
        if (employee->name == name) {
            employeeFound = true;
            cout << "Enter productivity score (out of 10): ";
            cin >> productivityScore;
            cout << "Enter attendance score (out of 10): ";
            cin >> attendanceScore;
            cout << "Enter attitude score (out of 10): ";
            cin >> attitudeScore;
            evaluations.push_back(new Evaluation(employee, productivityScore, attendanceScore, attitudeScore));
            cout << "Evaluation saved." << endl;
            break;
        }
    }
    if (!employeeFound) {
        cout << "Employee not found." << endl;
    }
}

void showEmployeeRatings() {
    for (Evaluation* evaluation : evaluations) {
        cout << "Employee: " << evaluation->employee->name << endl;
        cout << "Rating: " << evaluation->getRating() << endl;
        cout << "Average Score: " << evaluation->getAverageScore() << endl << endl;
    }
}

int main() {
    cout << "*******Welcome to the employee performance evaluation system********" << endl << endl;
    while (true) {
        string input;
        char ch;
        cout<<"What would you like to do? (Type 'quit' to exit) \n1.Evaluate Emplyee \n2.Show employee ratings \n3.Quit"<<endl;
        int choice;
        cin>> choice;
        do{
        // {
        //     int choice;
        //     cin>> choice/* code */;

        int choice;
        cin>>choice;
            switch(choice)
            {
                case 1:
                evaluateEmployee();
                break;

                case 2:
                showEmployeeRatings();
                break;

                case3:
                exit(0);
                break;

            }
            cout<<"Do you want to continue? (y/n)";
        } while (ch=='y' || ch=='Y');
        
        // cout << "What would you like to do? (Type 'quit' to exit) \n1.Evaluate Emplyee \n2.Show employee ratings \n3.Quit" << endl;
        // int choice;
        // cin>> choice
        // getline(cin, input);
        // if (input == "quit") {
        //     break;
        // }
        // else if (input == "evaluate employee") {
        //     evaluateEmployee();
        // }
        // else if (input == "show employee ratings") {
        //     showEmployeeRatings();
        // }
        // else {
        //     cout << "Invalid input." << endl;
        // }
    }
    return 0;
}