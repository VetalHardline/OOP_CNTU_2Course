#include "Task4.h"

void Task4::Task1_Clock1::Init()
{
    cout << "Enter hours: ";
    cin >> first;

    if(first < 0 || first > 1000)
    {
        cout << "Incorrect data";
        exit(0);
    }

    cout << "Enter minutes: ";
    cin >> second;
    if(first < 0 || first > 1000)
    {
        cout << "Incorrect data";
        exit(0);
    }
}

void Task4::Task1_Clock1::Display()
{
    cout << "Hours: " << first << endl;
    cout << "Minutes: " << second << endl;
}

void Task4::Task1_Clock1::minutes()
{
    cout << "Time in minutes: ";
    cout << first * 60 + second << endl;
}
