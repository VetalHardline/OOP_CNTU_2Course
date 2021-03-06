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
    void rememberDate(); // запомнить дату
    void comparisonOfDates(); //порівняння дат, обчислення кількості днів між датами.

private:
    int year;
    int month;
    int day;
    int yearRemember = 0;
    int monthRemember = 0;
    int dayRemember = 0;
    int countDays = 0;
};
