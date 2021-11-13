#include <iostream>
#include <string>
#include "task2_date.h"

using namespace std;

class Task3_Goods
{
public:
    Task3_Goods();

    void setNameOfGoods();
    string getNameOfGoods() { return nameOfGoods;}

    void setDateOfRegistration();

    void setPriceOfGoods();
    float getPriceOfGoods() { return priceOfGoods;}

    void setCountOfGoods();
    int getCountOfGoods() { return countOfGoods;}

    void setInvoiceNumber();
    string getInvoiceNumber() { return invoiceNumber;}

    void changePriceOfGoods(); // змінa ціни товару
    void changeCountOfGoods(); // змінa кількості товару
    void calculationOfTheCostOfGoods(); // обчислення вартості товару
    string toString();

private:
    string nameOfGoods; //найменування товару
    Task2_Date dateOfRegistration; //дата оформлення
    float priceOfGoods; //ціна товару
    int countOfGoods; //кількість одиниць товару
    string invoiceNumber; //номер накладної
};

