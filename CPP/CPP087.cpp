/* 87. Program to print system time & date */

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    time_t now = time(0);
    tm *ltime = localtime(&now);
    cout << "Current Time & Date: " << setfill('0') << setw(2) << ltime->tm_hour << ":" << setfill('0') << setw(2) << ltime->tm_min << ":" << setfill('0') << setw(2) << ltime->tm_sec << " - " << days[ltime->tm_wday] << ", " << setfill('0') << setw(2) << ltime->tm_mday << "/" << setfill('0') << setw(2) << 1 + ltime->tm_mon << "/" << setfill('0') << setw(4) << 1900 + ltime->tm_year << endl;
}