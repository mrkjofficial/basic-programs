/* 118. Program to implement a Student Information System using classes */

#include <iostream>
#include <conio.h>
#define UNAME "admin"
#define PASS "12345"
using namespace std;

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
        while (true)
        {
            cout << endl;
            cout << "Choose your Option:" << endl;
            cout << endl;
            cout << "1) Name:            " << name << endl;
            cout << "2) Gender:          " << gender << endl;
            cout << "3) Email:           " << email << endl;
            cout << "4) Mobile No.:      " << mobNo << endl;
            cout << "5) Address:         " << address << endl;
            cout << "6) Back" << endl;
            cout << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << endl;
                cout << "Enter Student's Name: ";
                cin.sync();
                getline(cin, name);
                cout << endl;
                cout << "Name Updated Successfully!" << endl;
                break;
            case 2:
                cout << endl;
                cout << "Enter Student's Gender (Ex: Male/Female): ";
                cin >> gender;
                cout << endl;
                cout << "Gender Updated Successfully!" << endl;
                break;
            case 3:
                cout << endl;
                cout << "Enter Student's Email (Ex: example@example.com): ";
                cin >> email;
                cout << endl;
                cout << "Email Updated Successfully!" << endl;
                break;
            case 4:
                cout << endl;
                cout << "Enter Student's Mobile No. (Ex: 9876543210): ";
                cin >> mobNo;
                cout << endl;
                cout << "Mobile No. Updated Successfully!" << endl;
                break;
            case 5:
                cout << endl;
                cout << "Enter Student's Address: ";
                cin.sync();
                getline(cin, address);
                cout << endl;
                cout << "Address Updated Successfully!" << endl;
                break;
            case 6:
                return;
            default:
                cout << endl;
                cout << "Invalid Option!" << endl;
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

    void viewRecord(int i = 0)
    {
        i = i == 0 ? rollNo : i;
        cout << endl;
        cout << "STUDENT: " << i << endl;
        cout << endl;
        cout << "Roll No.:        " << rollNo << endl;
        cout << "Name:            " << name << endl;
        cout << "Gender:          " << gender << endl;
        cout << "Email:           " << email << endl;
        cout << "Mobile No.:      " << mobNo << endl;
        cout << "Address:         " << address << endl;
    }
};

void menu();
int searchRecords(student[], int, int);
void deleteRecords(student[], int, int);
void viewRecords(student[], int);
string getPassword();

int main()
{
    string uname, pword;
    while (true)
    {
        cout << endl;
        cout << "USERNAME: ";
        cin >> uname;
        cout << endl;
        cout << "PASSWORD: ";
        pword = getPassword();
        if (uname == UNAME && pword == PASS)
        {
            cout << endl;
            menu();
        }
        else
        {
            cout << endl;
            cout << "Invalid Credentials!" << endl;
        }
    }
}

void menu()
{
    int choice, index = 0, rollNo, sIndex, size;
    cout << "Enter the Class Strength: ";
    cin >> size;
    student stud[size];
    while (true)
    {
        cout << endl;
        cout << "Choose your Option:" << endl;
        cout << endl;
        cout << "1) Add Record" << endl;
        cout << "2) Edit Record" << endl;
        cout << "3) Delete Record" << endl;
        cout << "4) View Record" << endl;
        cout << "5) View All Records" << endl;
        cout << "6) Exit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (index < size)
            {
                while (true)
                {
                    cout << endl;
                    cout << "Enter Student's Roll No.: ";
                    cin >> rollNo;
                    sIndex = searchRecords(stud, rollNo, index);
                    if (sIndex != -1)
                    {
                        cout << endl;
                        cout << "Roll No. Already Exists!" << endl;
                    }
                    else
                    {
                        break;
                    }
                }
                stud[index].addRecord(rollNo);
                index++;
                cout << endl;
                cout << "Record Added Successfully!" << endl;
            }
            else
            {
                cout << endl;
                cout << "Storage Full!" << endl;
            }
            break;
        case 2:
            cout << endl;
            cout << "Enter Student's Roll No.: ";
            cin >> rollNo;
            sIndex = searchRecords(stud, rollNo, index);
            if (sIndex != -1)
            {
                stud[sIndex].editRecord();
            }
            else
            {
                cout << endl;
                cout << "No Record Found!" << endl;
            }
            break;
        case 3:
            cout << endl;
            cout << "Enter Student's Roll No.: ";
            cin >> rollNo;
            sIndex = searchRecords(stud, rollNo, index);
            if (sIndex != -1)
            {
                deleteRecords(stud, sIndex, index);
                index--;
                cout << endl;
                cout << "Record Deleted Successfully!" << endl;
            }
            else
            {
                cout << endl;
                cout << "No Record Found!" << endl;
            }
            break;
        case 4:
            cout << endl;
            cout << "Enter Student's Roll No.: ";
            cin >> rollNo;
            sIndex = searchRecords(stud, rollNo, index);
            if (sIndex != -1)
            {
                stud[sIndex].viewRecord();
            }
            else
            {
                cout << endl;
                cout << "No Record Found!" << endl;
            }
            break;
        case 5:
            if (index == 0)
            {
                cout << endl;
                cout << "No Record Found!" << endl;
                break;
            }
            viewRecords(stud, index);
            break;
        case 6:
            exit(0);
        default:
            cout << endl;
            cout << "Invalid Option!" << endl;
        }
    }
}

int searchRecords(student stud[], int rollNo, int size)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (stud[i].getRoll() == rollNo)
        {
            index = i;
            break;
        }
    }
    return index;
}

void deleteRecords(student stud[], int sIndex, int size)
{
    for (sIndex; sIndex < size - 1; sIndex++)
    {
        stud[sIndex].deleteRecord(stud[sIndex + 1]);
    }
}

void viewRecords(student stud[], int size)
{
    for (int i = 0; i < size; i++)
    {
        stud[i].viewRecord(i + 1);
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
            cout << endl;
            return pwd;
        }
    } while (true);
}