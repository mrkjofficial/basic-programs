/* 119. Program to calculate GPA using array of objects */

#include <iostream>
using namespace std;

class subject
{
private:
    int hours, marks;
    char grade;
    float credits, qPoints;

public:
    void addDetails(int marks, int hours)
    {
        if (marks <= 100 && marks >= 90)
        {
            credits = 4.0;
            grade = 'A';
        }
        else if (marks <= 90 && marks >= 75)
        {
            credits = 3.0;
            grade = 'B';
        }
        else if (marks <= 75 && marks >= 50)
        {
            credits = 2.0;
            grade = 'C';
        }
        else if (marks <= 50 && marks >= 40)
        {
            credits = 1.0;
            grade = 'D';
        }
        else
        {
            credits = 0.0;
            grade = 'F';
        }
        this->marks = marks;
        this->hours = hours;
        qPoints = hours * credits;
    }

    int getMarks()
    {
        return marks;
    }

    char getGrade()
    {
        return toupper(grade);
    }

    float getCredits()
    {
        return credits;
    }

    int getHours()
    {
        return hours;
    }

    float getQPoints()
    {
        return qPoints;
    }
};

void addSubject(subject *, int &, int &);
void viewGPA(subject *, int &);

int main()
{
    int choice, index = 0, size;
    system("cls");
    cout << "########## | GPA CALCULATOR | ##########" << endl
         << endl;
    cout << "Enter total no. of subjects: ";
    cin >> size;
    subject sub[size];
menu:
    system("cls");
    cout << "########## | GPA Calculator | ##########" << endl
         << endl;
    cout << "1) Add Subject" << endl;
    cout << "2) View GPA" << endl;
    cout << "3) Exit" << endl
         << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        addSubject(sub, index, size);
        break;
    case 2:
        viewGPA(sub, index);
        break;
    case 3:
        exit(0);
    default:
        cout << "Invalid Option!";
    }
    goto menu;
}

void addSubject(subject *sub, int &index, int &size)
{
    while (1)
    {
        system("cls");
        cout << "########## | ADD SUBJECT | ##########" << endl
             << endl;
        if (index == size)
        {
            cout << "Storage Full!";
            cin.sync();
            cin.get();
            break;
        }
        else
        {
            int hours, marks;
            cout << "| Subject - " << index + 1 << " |" << endl
                 << endl;
            cout << "Enter Marks: ";
            cin >> marks;
            cout << "Enter Hours: ";
            cin >> hours;
            sub[index].addDetails(marks, hours);
            index++;
            cout << "Subject Added Successfully!";
            cin.sync();
            cin.get();
            break;
        }
    }
}

void viewGPA(subject *sub, int &index)
{
    float tHours = 0, tQPoints = 0;
    system("cls");
    cout << "######################################## | VIEW GPA | ########################################" << endl
         << endl;
    if (index == 0)
    {
        cout << "No Subject Found!";
        cin.sync();
        cin.get();
    }
    else
    {
        cout << "  Sl. No.\tMarks\t\tGrade\t\tCredits\t\tHours\t\tQuality Points" << endl;
        cout << "-----------------------------------------------------------------------------------------------" << endl
             << endl;
        for (int i = 0; i < index; i++)
        {
            cout << "     " << (i + 1) << "\t\t " << sub[i].getMarks() << "\t\t  " << sub[i].getGrade() << "\t\t   " << sub[i].getCredits() << "\t\t  " << sub[i].getHours() << "\t\t\t" << sub[i].getQPoints() << endl;
            tHours += sub[i].getHours();
            tQPoints += sub[i].getQPoints();
        }
        cout << "\nGPA: " << tQPoints / tHours << endl;
        cout << "\nPress Any Key To Exit...";
        cin.sync();
        cin.get();
    }
}