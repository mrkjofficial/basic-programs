/* 117. Program to find the area of objects using function overloading */

#include <iostream>
const float PI = 3.14;
using namespace std;

class measure
{
public:
    static int area(int s)
    {
        return (s * s);
    }
    static int area(int l, int b)
    {
        return (l * b);
    }
    static float area(float b, float h)
    {
        return (0.5 * b * h);
    }
    static float area(float r)
    {
        return (PI * r * r);
    }
};

int main()
{
    int side, length, breadth, choice;
    float base, height, radius;
    while (true)
    {
        cout << endl;
        cout << "Select your shape:" << endl;
        cout << endl;
        cout << "1) Square" << endl;
        cout << "2) Rectangle" << endl;
        cout << "3) Triangle" << endl;
        cout << "4) Circle" << endl;
        cout << "5) Exit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << endl;
            cout << "Enter the side of a Square: ";
            cin >> side;
            cout << endl;
            cout << "Area: " << measure::area(side) << endl;
            break;
        case 2:
            cout << endl;
            cout << "Enter the length & breadth of a Rectangle: ";
            cin >> length >> breadth;
            cout << endl;
            cout << "Area: " << measure::area(length, breadth) << endl;
            break;
        case 3:
            cout << endl;
            cout << "Enter the base & height of a Triangle: ";
            cin >> base >> height;
            cout << endl;
            cout << "Area: " << measure::area(base, height) << endl;
            break;
        case 4:
            cout << endl;
            cout << "Enter the radius of a Circle: ";
            cin >> radius;
            cout << endl;
            cout << "Area: " << measure::area(radius) << endl;
            break;
        case 5:
            exit(0);
        default:
            cout << endl;
            cout << "Invalid Input!" << endl;
        }
    }
}