#include "task2_date.h"

Task2_Date::Task2_Date()
{

}

void Task2_Date::setYear()
{
    int _year = 0;
    cout << "Enter year: ";
    cin >> _year;

    if(_year > 0 && _year < 2022){
        year = _year;
    }
    else {
            cout << "Error! Year can not be lower that 0!" << endl;
            exit(0);
    }
}

void Task2_Date::setMonth()
{
    int _month = 0;
    cout << "Enter month: ";
    cin >> _month;

    if(_month > 0 && _month < 13){
        month = _month;
    }
    else {
            cout << "Error! Month can not be lower that 0!" << endl;
            exit(0);
    }
}

void Task2_Date::setDay()
{
    int _day = 0;
    cout << "Enter day: ";
    cin >> _day;

    if(_day > 0 && _day < 32){
        day = _day;
    }
    else {
            cout << "Error! Day can not be lower that 0!" << endl;
            exit(0);
    }
}

void Task2_Date::toString()
{
    cout << "Date: " << year << "." << month << "." << day << endl;
}

void Task2_Date::calculatingDates()
{
    int numberOfDays = 0;
<<<<<<< HEAD
    int test = 0;
    cout << "Enter number of days: ";
    cin >> numberOfDays;
    if(numberOfDays > 31 || numberOfDays < 0){
        cout << "Error! Day can not be lower that 31!" << endl;
        exit(0);
    }

    if(day + numberOfDays > 31)
    {
        test = day + numberOfDays - 31;
        month++;
        day = test;
        if(month > 12)
        {
            month = 1;
            year++;
        }
=======
    cout << "Enter number of days: ";
    cin >> numberOfDays;

    if(day + numberOfDays > 31)
    {
        month += 1;
        int newDay = 0;
        newDay = 31 - day;
        day = 0;
        day += newDay;
>>>>>>> 70dacf970df156b4da63182f2649a50773781452
        toString();
    }
    else{
        day += numberOfDays;
        toString();
    }
}

void Task2_Date::subtractionDays()
{
<<<<<<< HEAD
    int numberOfDays2 = 0;
    int test = 0;
    cout << "Enter number of days: ";
    cin >> numberOfDays2;
    if(numberOfDays2 > 31 || numberOfDays2 < 0){
        cout << "Error! Day can not be lower that 31!" << endl;
        exit(0);
    }

    if(day - numberOfDays2 < 0)
    {
        test = day - numberOfDays2 + 31;
        month--;
        day = test;
        if(month < 1)
        {
            month = 12;
            year--;
        }
        toString();
    }
    else{
        day -= numberOfDays2;
        toString();
    }
}


void Task2_Date::LeapYear()
{
    if(year % 4 == 0)
=======

}

void Task2_Date::LeapYear()
{
    if(month == 2 && day == 29)
>>>>>>> 70dacf970df156b4da63182f2649a50773781452
        cout << "This day is a Lap Year";
    else
        cout << "This day is`nt a Lap Year";
}
<<<<<<< HEAD

void Task2_Date::rememberDate()
{
    yearRemember = year;
    monthRemember = month;
    dayRemember = day;
}

void Task2_Date::comparisonOfDates()
{
    cout << "Date(Do): " << yearRemember << "." << monthRemember << "." << dayRemember << endl;
    cout << "Date(After): " << year << "." << month << "." << day << endl;
}
=======
>>>>>>> 70dacf970df156b4da63182f2649a50773781452
