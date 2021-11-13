#include "Task3_Goods.h"

Task3_Goods::Task3_Goods()
{

}

void Task3_Goods::setNameOfGoods()
{
<<<<<<< HEAD
    string _nameOfGoods;
    cout << "Enter nameOfGoods: ";
    cin >> _nameOfGoods;
    nameOfGoods = _nameOfGoods;
=======

>>>>>>> 70dacf970df156b4da63182f2649a50773781452
}

void Task3_Goods::setDateOfRegistration()
{
<<<<<<< HEAD
    dateOfRegistration.setYear();
    dateOfRegistration.setMonth();
    dateOfRegistration.setDay();
    dateOfRegistration.toString();
    dateOfRegistration.LeapYear();
=======

>>>>>>> 70dacf970df156b4da63182f2649a50773781452
}

void Task3_Goods::setPriceOfGoods()
{
<<<<<<< HEAD
    float _priceOfGoods = 0;
    cout << "\nEnter priceOfGoods: ";
    cin >> _priceOfGoods;

    if(_priceOfGoods >= 0){
        priceOfGoods = _priceOfGoods;
    }
    else {
            cout << "Error! priceOfGoods can not be lower that 0!" << endl;
            exit(0);
    }
=======

>>>>>>> 70dacf970df156b4da63182f2649a50773781452
}

void Task3_Goods::setCountOfGoods()
{
<<<<<<< HEAD
    int _countOfGoods = 0;
    cout << "Enter countOfGoods: ";
    cin >> _countOfGoods;

    if(_countOfGoods >= 0){
        countOfGoods = _countOfGoods;
    }
    else {
            cout << "Error! countOfGoods can not be lower that 0!" << endl;
            exit(0);
    }
=======

>>>>>>> 70dacf970df156b4da63182f2649a50773781452
}

void Task3_Goods::setInvoiceNumber()
{
<<<<<<< HEAD
    string _invoiceNumber;
    cout << "Enter invoiceNumber: ";
    cin >> _invoiceNumber;
    invoiceNumber = _invoiceNumber;
=======

>>>>>>> 70dacf970df156b4da63182f2649a50773781452
}

void Task3_Goods::changePriceOfGoods()
{
<<<<<<< HEAD
    cout << "Current price: " << priceOfGoods << "\nWhat price do you want to change: ";
    float _priceOfGoods = 0;
    cin >> _priceOfGoods;

    if(_priceOfGoods >= 0){
        priceOfGoods = _priceOfGoods;
    }
    else {
            cout << "Error! PriceOfGoods can not be lower that 0!" << endl;
            exit(0);
    }
=======

>>>>>>> 70dacf970df156b4da63182f2649a50773781452
}

void Task3_Goods::changeCountOfGoods()
{
<<<<<<< HEAD
    cout << "Current Count: " << countOfGoods << "\nWhat count of goods do you want to change: ";
    int _countOfGoods = 0;
    cin >> _countOfGoods;

    if(_countOfGoods >= 0){
        countOfGoods = _countOfGoods;
    }
    else {
            cout << "Error! countOfGoods can not be lower that 0!" << endl;
            exit(0);
    }
}

=======

}

void Task3_Goods::calculationOfTheCostOfGoods()
{

}

string Task3_Goods::toString()
{

}
>>>>>>> 70dacf970df156b4da63182f2649a50773781452
