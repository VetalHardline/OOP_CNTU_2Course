#include <iostream>
#include "Task1_Clock.h"
<<<<<<< HEAD
//#include "task2_date.h"
#include "Task3_Goods.h"
=======
#include "task2_date.h"
>>>>>>> 70dacf970df156b4da63182f2649a50773781452

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
<<<<<<< HEAD
    /*cout << "\n\n\nTask 2:" << endl;
=======
    cout << "\n\n\nTask 2:" << endl;
>>>>>>> 70dacf970df156b4da63182f2649a50773781452
    Task2_Date testik;
    testik.setYear();
    testik.setMonth();
    testik.setDay();
    testik.toString();
<<<<<<< HEAD
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
=======
    testik.calculatingDates();
    testik.LeapYear();

    //Task3: 
    cout << "\n\n\nTask 3:" << endl;

>>>>>>> 70dacf970df156b4da63182f2649a50773781452

    //Task4:
    cout << "\n\n\nTask 4:" << endl;


    return 0;
}
