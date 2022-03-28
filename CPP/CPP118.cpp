/* 118. Program to implement a Student Information System using classes */

#include <iostream>
#include <conio.h>
#define UNAME "admin"
#define PASS "admin"
using namespace std;

void menu();
string getPassword();

class student
{
private:
    int rollNo;
    long long mobNo;
    string name, gender, email, address;

public:
    int getRoll()
    {
        return rollNo;
    }

    void addRecord(int rNo)
    {
        rollNo = rNo;
        cout << "Enter Student's Name: ";
        cin.sync();
        getline(cin, name);
        cout << "Enter Student's Gender (Ex: Male/Female): ";
        cin >> gender;
        cout << "Enter Student's Email (Ex: example@example.com): ";
        cin >> email;
        cout << "Enter Student's Mobile No. (Ex: 9876543210): ";
        cin >> mobNo;
        cout << "Enter Student's Address: ";
        cin.sync();
        getline(cin, address);
    }

    void editRecord()
    {
        int choice;
        while (1)
        {
            system("cls");
            cout << "#################### | EDIT RECORD | ####################" << endl
                 << endl;
            cout << "1) Name:            " << name << endl;
            cout << "2) Gender:          " << gender << endl;
            cout << "3) Email:           " << email << endl;
            cout << "4) Mobile No.:      " << mobNo << endl;
            cout << "5) Address:         " << address << endl;
            cout << "6) Back" << endl
                 << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "\nEnter Student's Name: ";
                cin.sync();
                getline(cin, name);
                cout << "\nName Updated Successfully!";
                cin.sync();
                cin.get();
                break;
            case 2:
                cout << "\nEnter Student's Gender (Ex: Male/Female): ";
                cin >> gender;
                cout << "\nGender Updated Successfully!";
                cin.sync();
                cin.get();
                break;
            case 3:
                cout << "\nEnter Student's Email (Ex: example@example.com): ";
                cin >> email;
                cout << "\nEmail Updated Successfully!";
                cin.sync();
                cin.get();
                break;
            case 4:
                cout << "\nEnter Student's Mobile No. (Ex: 9876543210): ";
                cin >> mobNo;
                cout << "\nMobile No. Updated Successfully!";
                cin.sync();
                cin.get();
                break;
            case 5:
                cout << "\nEnter Student's Address: ";
                cin.sync();
                getline(cin, address);
                cout << "\nEmail Updated Successfully!";
                cin.sync();
                cin.get();
                break;
            case 6:
                return;
            default:
                cout << "\nInvalid Option!";
                cin.sync();
                cin.get();
            }
        }
    }

    void deleteRecord(student &std)
    {
        rollNo = std.rollNo;
        name = std.name;
        gender = std.gender;
        email = std.email;
        mobNo = std.mobNo;
        address = std.address;
    }

    void viewRecord()
    {
        system("cls");
        cout << "#################### | VIEW RECORD | ####################" << endl
             << endl;
        cout << "Roll No.:        " << rollNo << endl;
        cout << "Name:            " << name << endl;
        cout << "Gender:          " << gender << endl;
        cout << "Email:           " << email << endl;
        cout << "Mobile No.:      " << mobNo << endl;
        cout << "Address:         " << address << endl
             << endl;
    }

    void viewAllRecord(int i)
    {
        cout << "| STUDENT: " << i << " |" << endl
             << endl;
        cout << "Roll No.:        " << rollNo << endl;
        cout << "Name:            " << name << endl;
        cout << "Gender:          " << gender << endl;
        cout << "Email:           " << email << endl;
        cout << "Mobile No.:      " << mobNo << endl;
        cout << "Address:         " << address << endl
             << endl;
    }
};

int main()
{
    string uname, pword;
    while (1)
    {
        system("cls");
        cout << "#################### | LOGIN | ####################" << endl
             << endl;
        cout << "USERNAME: ";
        cin >> uname;
        cout << "PASSWORD: ";
        pword = getPassword();
        if (uname == UNAME && pword == PASS)
        {
            menu();
        }
        else
        {
            cout << "\nInvalid Credentials!";
            cin.sync();
            cin.get();
        }
    }
}

void menu()
{
    int choice, index = 0, rollNo, sindex, size;
    system("cls");
    cout << "#################### | STUDENT INFORMATION SYSTEM | ####################" << endl
         << endl;
    cout << "Enter the Class Strength: ";
    cin >> size;
    student stud[size];
    while (1)
    {
        system("cls");
        cout << "#################### | STUDENT INFORMATION SYSTEM | ####################" << endl
             << endl;
        cout << "1) Add Record" << endl;
        cout << "2) Edit Record" << endl;
        cout << "3) Delete Record" << endl;
        cout << "4) View Record" << endl;
        cout << "5) View All Records" << endl;
        cout << "6) Exit\n"
             << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("cls");
            cout << "#################### | ADD RECORD | ####################" << endl
                 << endl;
            if (index < size)
            {
                while (1)
                {
                    system("cls");
                    cout << "#################### | ADD RECORD | ####################" << endl
                         << endl;
                    cout << "Enter Student's Roll No.: ";
                    cin >> rollNo;
                    for (sindex = 0; sindex < index; sindex++)
                    {
                        if (stud[sindex].getRoll() == rollNo)
                        {
                            break;
                        }
                    }
                    if (sindex == index)
                    {
                        break;
                    }
                    else
                    {
                        cout << "Roll No. Already Exists!";
                        cin.sync();
                        cin.get();
                    }
                }
                stud[index].addRecord(rollNo);
                index++;
                cout << "\nRecord Added Successfully!";
                cin.sync();
                cin.get();
            }
            else
            {
                cout << "\nStorage Full!";
                cin.sync();
                cin.get();
            }
            break;
        case 2:
            system("cls");
            cout << "#################### | EDIT RECORD | ####################" << endl
                 << endl;
            cout << "Enter Student's Roll No.: ";
            cin >> rollNo;
            for (sindex = 0; sindex < index; sindex++)
            {
                if (stud[sindex].getRoll() == rollNo)
                {
                    break;
                }
            }
            if (sindex == index)
            {
                cout << "\nNo Record Found!";
                cin.sync();
                cin.get();
            }
            else
            {
                stud[sindex].editRecord();
            }
            break;
        case 3:
            system("cls");
            cout << "#################### | DELETE RECORD | ####################" << endl
                 << endl;
            cout << "Enter Student's Roll No.: ";
            cin >> rollNo;
            for (sindex = 0; sindex < index; sindex++)
            {
                if (stud[sindex].getRoll() == rollNo)
                {
                    break;
                }
            }
            if (sindex == index)
            {
                cout << "\nNo Record Found!";
                cin.sync();
                cin.get();
            }
            else
            {
                for (sindex; sindex < index - 1; sindex++)
                {
                    stud[sindex].deleteRecord(stud[sindex + 1]);
                }
                index--;
                cout << "\nRecord Deleted Successfully!";
                cin.sync();
                cin.get();
            }
            break;
        case 4:
            system("cls");
            cout << "#################### | VIEW RECORD | ####################" << endl
                 << endl;
            cout << "Enter Student's Roll No.: ";
            cin >> rollNo;
            for (sindex = 0; sindex < index; sindex++)
            {
                if (stud[sindex].getRoll() == rollNo)
                {
                    break;
                }
            }
            if (sindex == index)
            {
                cout << "\nNo Record Found!";
                cin.sync();
                cin.get();
            }
            else
            {
                stud[sindex].viewRecord();
                cout << "Press Any Key To Exit...";
                cin.sync();
                cin.get();
            }
            break;
        case 5:
            system("cls");
            cout << "#################### | VIEW ALL RECORDS | ####################" << endl
                 << endl;
            if (index == 0)
            {
                cout << "\nNo Records Found!";
                cin.sync();
                cin.get();
                break;
            }
            for (sindex = 0; sindex < index; sindex++)
            {
                stud[sindex].viewAllRecord(sindex + 1);
            }
            cout << "Press Any Key To Exit...";
            cin.sync();
            cin.get();
            break;
        case 6:
            exit(0);
        default:
            cout << "\nInvalid Option!";
            cin.sync();
            cin.get();
        }
    }
}

string getPassword()
{
    int i = 0;
    char c;
    string pwd;
    do
    {
        c = getch();
        if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122) && i <= 10)
        {
            cout << "*";
            pwd.push_back(c);
            i++;
        }
        else if (c == 8 && i > 0)
        {
            cout << "\b \b";
            pwd.pop_back();
            i--;
        }
        else if (c == 13)
        {
            return pwd;
        }
    } while (1);
}