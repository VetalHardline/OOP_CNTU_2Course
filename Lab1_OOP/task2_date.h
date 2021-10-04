#include <iostream>

using namespace std;

class Task2_Date
{
public:
    Task2_Date();

    void setYear();
    int getYear() { return year;}

    void setMonth();
    int getMonth() { return month;}

    void setDay();
    int getDay() { return day;}

    void toString();
    void calculatingDates(); // обчислення дати через задану кількість днів;
    void subtractionDays(); // віднімання заданої кількості днів з дати;
    void LeapYear(); // високоний рік

private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
};
