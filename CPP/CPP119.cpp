/* 119. Program to calculate GPA using array of objects */

#include <iostream>
using namespace std;

class subject
{
private:
    int subCode, hours, marks;
    char grade;
    float credits, qPoints;

public:
    void addDetails(int subCode, int marks, int hours)
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
        this->subCode = subCode;
        this->marks = marks;
        this->hours = hours;
        qPoints = hours * credits;
    }

    int getsubCode()
    {
        return subCode;
    }

    int getMarks()
    {
        return marks;
    }

    char getGrade()
    {
        return grade;
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
    cout << endl;
    cout << "Enter total no. of subjects: ";
    cin >> size;
    subject sub[size];
    while (true)
    {
        cout << endl;
        cout << "Choose your Option:" << endl;
        cout << endl;
        cout << "1) Add Subject" << endl;
        cout << "2) View GPA" << endl;
        cout << "3) Exit" << endl;
        cout << endl;
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
            cout << endl;
            cout << "Invalid Option!" << endl;
        }
    }
}

void addSubject(subject *sub, int &index, int &size)
{
    if (index == size)
    {
        cout << endl;
        cout << "Storage Full!" << endl;
        return;
    }
    int subCode, hours, marks;
    cout << endl;
    cout << "Subject - " << index + 1 << endl;
    cout << endl;
    cout << "Enter Subject Code (CS-001): CS-";
    cin >> subCode;
    cout << endl;
    cout << "Enter Marks (Out of 100): ";
    cin >> marks;
    cout << endl;
    cout << "Enter Hours: ";
    cin >> hours;
    sub[index].addDetails(subCode, marks, hours);
    index++;
    cout << endl;
    cout << "Subject Added Successfully!" << endl;
}

void viewGPA(subject *sub, int &index)
{
    float tHours = 0, tQPoints = 0;
    if (index == 0)
    {
        cout << endl;
        cout << "No Subject Found!" << endl;
    }
    else
    {
        cout << endl;
        cout << "Sl. No. \t Subject Code \t Marks \t Grade \t Credits \t Hours \t Quality Points" << endl;
        cout << "---------------------------------------------------------------------------------------" << endl;
        cout << endl;
        for (int i = 0; i < index; i++)
        {
            cout << "   " << (i + 1) << " \t\t    " << "CS-" << sub[i].getsubCode() << " \t  " << sub[i].getMarks() << " \t   " << sub[i].getGrade() << " \t    " << sub[i].getCredits() << " \t\t   " << sub[i].getHours() << " \t       " << sub[i].getQPoints() << endl;
            tHours += sub[i].getHours();
            tQPoints += sub[i].getQPoints();
        }
        cout << endl;
        cout << "GPA: " << tQPoints / tHours << endl;
    }
}