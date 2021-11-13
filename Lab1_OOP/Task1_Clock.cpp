#include "Task1_Clock.h"

Task1_Clock::Task1_Clock()
{

}

void Task1_Clock::Init()
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

void Task1_Clock::Display()
{
    cout << "Hours: " << first << endl;
    cout << "Minutes: " << second << endl;
}

void Task1_Clock::minutes()
{
    cout << "Time in minutes: ";
    cout << first * 60 + second << endl;
}


