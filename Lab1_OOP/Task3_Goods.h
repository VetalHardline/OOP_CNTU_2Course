#include <iostream>
#include <string>
<<<<<<< HEAD
#include "task2_date.h"
=======
>>>>>>> 70dacf970df156b4da63182f2649a50773781452

using namespace std;

class Task3_Goods
{
public:
    Task3_Goods();

    void setNameOfGoods();
    string getNameOfGoods() { return nameOfGoods;}

    void setDateOfRegistration();
<<<<<<< HEAD
=======
    string getDateOfRegistration() { return dateOfRegistration;}
>>>>>>> 70dacf970df156b4da63182f2649a50773781452

    void setPriceOfGoods();
    float getPriceOfGoods() { return priceOfGoods;}

    void setCountOfGoods();
    int getCountOfGoods() { return countOfGoods;}

    void setInvoiceNumber();
<<<<<<< HEAD
    string getInvoiceNumber() { return invoiceNumber;}

    void changePriceOfGoods(); // змінa ціни товару
    void changeCountOfGoods(); // змінa кількості товару
=======
    int getInvoiceNumber() { return invoiceNumber;}

    void changePriceOfGoods(); // змінa ціни товару
    void changeCountOfGoods(); // змінa кількості товару (збільшення і зменшення),
>>>>>>> 70dacf970df156b4da63182f2649a50773781452
    void calculationOfTheCostOfGoods(); // обчислення вартості товару
    string toString();

private:
<<<<<<< HEAD
    string nameOfGoods; //найменування товару
    Task2_Date dateOfRegistration; //дата оформлення
    float priceOfGoods; //ціна товару
    int countOfGoods; //кількість одиниць товару
    string invoiceNumber; //номер накладної
=======
    string nameOfGoods;
    string dateOfRegistration;
    float priceOfGoods;
    int countOfGoods;
    unsigned int invoiceNumber;
>>>>>>> 70dacf970df156b4da63182f2649a50773781452
};

