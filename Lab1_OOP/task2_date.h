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
<<<<<<< HEAD
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
=======

private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
>>>>>>> 70dacf970df156b4da63182f2649a50773781452
};
