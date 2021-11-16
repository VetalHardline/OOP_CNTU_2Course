#include "Task3_Goods.h"

Task3_Goods::Task3_Goods()
{

}

void Task3_Goods::setNameOfGoods()
{
    string _nameOfGoods;
    cout << "Enter nameOfGoods: ";
    cin >> _nameOfGoods;
    nameOfGoods = _nameOfGoods;
}

void Task3_Goods::setDateOfRegistration()
{
    dateOfRegistration.setYear();
    dateOfRegistration.setMonth();
    dateOfRegistration.setDay();
    dateOfRegistration.toString();
    dateOfRegistration.LeapYear();
}

void Task3_Goods::setPriceOfGoods()
{
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
}

void Task3_Goods::setCountOfGoods()
{
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
}

void Task3_Goods::setInvoiceNumber()
{
    string _invoiceNumber;
    cout << "Enter invoiceNumber: ";
    cin >> _invoiceNumber;
    invoiceNumber = _invoiceNumber;
}

void Task3_Goods::changePriceOfGoods()
{
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
}

void Task3_Goods::changeCountOfGoods()
{
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



void Task3_Goods::calculationOfTheCostOfGoods()
{

}

void Task3_Goods::toString()
{
    cout << "Name of goods: " << nameOfGoods << endl;
    cout << "PriceOfGoods: " << priceOfGoods << endl;
    cout << "CountOfGoods: " << countOfGoods << endl;
    cout << "InvoiceNumber: " << invoiceNumber;
}
