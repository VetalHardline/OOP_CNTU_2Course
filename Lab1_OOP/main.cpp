#include <iostream>
#include "Task1_Clock.h"
//#include "task2_date.h"
#include "Task3_Goods.h"
#include "Task4.h"
using namespace std;

int main()
{
    //Task1:
    cout << "Task 1:" << endl;
    Task1_Clock test;
    test.Init();
    test.Display();
    test.minutes();

    //Task2:
    /*
    cout << "\n\n\nTask 2:" << endl;
    Task2_Date testik;
    testik.setYear();
    testik.setMonth();
    testik.setDay();
    testik.toString();
    testik.LeapYear();
    testik.rememberDate();
    testik.calculatingDates();
    testik.subtractionDays();
    testik.comparisonOfDates();*/

    //Task3: 
    cout << "\n\n\nTask 3:" << endl;
    Task3_Goods Good;
    Good.setNameOfGoods();
    Good.setDateOfRegistration();
    Good.setPriceOfGoods();
    Good.setCountOfGoods();
    Good.setInvoiceNumber();
    Good.changePriceOfGoods();
    Good.changeCountOfGoods();
    Good.toString();

    //Task4:
    cout << "\n\n\nTask 4:" << endl;
    Task4::Task1_Clock1 vkladeniy;
    vkladeniy.Init();
    vkladeniy.Display();
    vkladeniy.minutes();

    return 0;
}
