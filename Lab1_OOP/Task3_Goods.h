#include <iostream>
#include <string>

using namespace std;

class Task3_Goods
{
public:
    Task3_Goods();

    void setNameOfGoods();
    string getNameOfGoods() { return nameOfGoods;}

    void setDateOfRegistration();
    string getDateOfRegistration() { return dateOfRegistration;}

    void setPriceOfGoods();
    float getPriceOfGoods() { return priceOfGoods;}

    void setCountOfGoods();
    int getCountOfGoods() { return countOfGoods;}

    void setInvoiceNumber();
    int getInvoiceNumber() { return invoiceNumber;}

    void changePriceOfGoods(); // змінa ціни товару
    void changeCountOfGoods(); // змінa кількості товару (збільшення і зменшення),
    void calculationOfTheCostOfGoods(); // обчислення вартості товару
    string toString();

private:
    string nameOfGoods;
    string dateOfRegistration;
    float priceOfGoods;
    int countOfGoods;
    unsigned int invoiceNumber;
};

