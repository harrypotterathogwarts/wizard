#include <iostream>
#include <string>

using namespace std;

class Chatbot
{
private:
    bool exitMenu; // Flag to control the main menu loop

public:
    Chatbot()
    {
        exitMenu = false; // Initialize the flag
    }

    void start()
    {
        cout << "Welcome to College Chatbot!" << endl;
        showMenu();
    }

private:
    void showMenu()
    {
        while (!exitMenu)
        {
            cout << "\n---------- Menu ----------" << endl;
            cout << "1. Syllabus" << endl;
            cout << "2. Placements" << endl;
            cout << "3. Cutoffs" << endl;
            cout << "4. Admissions" << endl;
            cout << "5. Library" << endl;
            cout << "6. Hostel" << endl;
            cout << "7. Canteen" << endl;
            cout << "8. Sports" << endl;
            cout << "9. Meet Our Faculty" << endl;
            cout << "10. Exit" << endl;

            int choice;
            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                showSyllabusMenu();
                break;
            case 2:
                showPlacementsMenu();
                break;
            case 3:
                showCutoffsMenu();
                break;
            case 4:
                showAdmissionsMenu();
                break;
            case 5:
                openLink("https://college.com/library");
                break;
            case 6:
                showHostelMenu();
                break;
            case 7:
                showCanteenMenu();
                break;
            case 8:
                openLink("https://college.com/sports");
                break;
            case 9:
                showFacultyMenu();
                break;
            case 10:
                cout << "\nExiting the chatbot. Goodbye!" << endl;
                exitMenu = true; // Set the flag to exit the loop
                break;
            default:
                cout << "\nInvalid choice! Please try again." << endl;
            }
        }
    }

    void showSyllabusMenu()
    {
        cout << "\n---------- Syllabus Menu ----------" << endl;
        cout << "1. First Year" << endl;
        cout << "2. Second Year" << endl;
        cout << "3. Third Year" << endl;
        cout << "4. Fourth Year" << endl;
        cout << "5. Back to Main Menu" << endl;

        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            openLink("https://college.com/syllabus/firstyear");
            break;
        case 2:
            openLink("https://college.com/syllabus/secondyear");
            break;
        case 3:
            openLink("https://college.com/syllabus/thirdyear");
            break;
        case 4:
            openLink("https://college.com/syllabus/fourthyear");
            break;
        case 5:
            showMenu();
            return;
        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

        // After performing the action, show the syllabus menu again
        showSyllabusMenu();
    }

    void showPlacementsMenu()
    {
        cout << "\n---------- Placements Menu ----------" << endl;
        cout << "1. View Placement Report" << endl;
        cout << "2. Highest Placements" << endl;
        cout << "3. Back to Main Menu" << endl;

        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            openLink("https://college.com/placements/report");
            break;
        case 2:
            openLink("https://college.com/placements/top");
            break;
        case 3:
            showMenu();
            return;
        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

        // After performing the action, show the placements menu again
        showPlacementsMenu();
    }

    void showCutoffsMenu()
    {
        cout << "\n---------- Cutoffs Menu ----------" << endl;
        cout << "1. View Cutoff Percentage (Past 5 Years)" << endl;
        cout << "2. Back to Main Menu" << endl;

        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nCutoff Percentage (Out of 100) for Past 5 Years:" << endl;
            cout << "2022: 99.678%" << endl;
            cout << "2021: 98.421%" << endl;
            cout << "2020: 99.742%" << endl;
            cout << "2019: 99.201%" << endl;
            cout << "2018: 99.159%" << endl;
            break;
        case 2:
            showMenu();
            return;
        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

        // After performing the action, show the cutoffs menu again
        showCutoffsMenu();
    }

    void showAdmissionsMenu()
    {
        cout << "\n---------- Admissions Menu ----------" << endl;
        cout << "1. Undergraduate Programs" << endl;
        cout << "2. Postgraduate Programs" << endl;
        cout << "3. Back to Main Menu" << endl;

        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            openLink("https://college.com/admissions/undergraduate");
            break;
        case 2:
            openLink("https://college.com/admissions/postgraduate");
            break;
        case 3:
            showMenu();
            return;
        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

        // After performing the action, show the admissions menu again
        showAdmissionsMenu();
    }

    void showHostelMenu()
    {
        cout << "\n---------- Hostel Menu ----------" << endl;
        cout << "1. Boys Hostel" << endl;
        cout << "2. Girls Hostel" << endl;
        cout << "3. Back to Main Menu" << endl;

        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nBoys Hostel Price: Rs. 3500 per month" << endl;
            break;
        case 2:
            cout << "\nGirls Hostel Price: Rs. 4000 per month" << endl;
            break;
        case 3:
            showMenu();
            return;
        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

        // After performing the action, show the hostel menu again
        showHostelMenu();
    }

    void showCanteenMenu()
    {
        cout << "\n---------- Canteen Menu ----------" << endl;
        cout << "1. Breakfast" << endl;
        cout << "2. Lunch" << endl;
        cout << "3. Dinner" << endl;
        cout << "4. Monthly Mess" << endl;
        cout << "5. Back to Main Menu" << endl;

        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nBreakfast Rate: Rs. 30" << endl;
            break;
        case 2:
            cout << "\nLunch Rate: Rs. 500" << endl;
            break;
        case 3:
            cout << "\nDinner Rate: Rs. 70" << endl;
            break;
        case 4:
            cout << "\nMonthly Mess Rate: Rs. 2000" << endl;
            break;
        case 5:
            showMenu();
            return;
        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

        // After performing the action, show the canteen menu again
        showCanteenMenu();
    }

    void showFacultyMenu()
    {
        cout << "\n---------- Faculty Menu ----------" << endl;
        cout << "1. Computer Department" << endl;
        cout << "2. IT Department" << endl;
        cout << "3. ENTC Department" << endl;
        cout << "4. Back to Main Menu" << endl;

        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n---------- Computer Department ----------" << endl;
            cout << "1. Dr. A. B. C" << endl;
            cout << "2. Dr. P. Q. R" << endl;
            cout << "3. Prof. X. Y. Z" << endl;
            cout << "4. Prof. L. M. N" << endl;
            cout << "5. Prof. S. T. U" << endl;
            break;
        case 2:
            cout << "\n---------- IT Department ----------" << endl;
            cout << "1. Dr. A. B. C" << endl;
            cout << "2. Dr. P. Q. R" << endl;
            cout << "3. Prof. X. Y. Z" << endl;
            cout << "4. Prof. L. M. N" << endl;
            cout << "5. Prof. S. T. U" << endl;
            break;
        case 3:
            cout << "\n---------- ENTC Department ----------" << endl;
            cout << "1. Dr. A. B. C" << endl;
            cout << "2. Dr. P. Q. R" << endl;
            cout << "3. Prof. X. Y. Z" << endl;
            cout << "4. Prof. L. M. N" << endl;
            cout << "5. Prof. S. T. U" << endl;
            break;
        case 4:
            showMenu();
            return;
        default:
            cout << "\nInvalid choice! Please try again." << endl;
        }

        // After performing the action, show the faculty menu again
        showFacultyMenu();
    }

    void openLink(const string &link)
    {
        cout << "\nOpening link: " << link << endl;

#ifdef _WIN32 // Windows
        string command = "start " + link;
        system(command.c_str());
#elif defined(_APPLE_) // macOS
        string command = "open " + link;
        system(command.c_str());
#elif defined(_linux_) // Linux
        string command = "xdg-open " + link;
        system(command.c_str());
#else
        cout << "Opening links is not supported on this platform." << endl;
#endif
    }
};
int main()
{
    Chatbot chatbot;
    chatbot.start();

    return 0;
}