//
// Created by Gerardo Jesus Arguello Haces on 1/29/18.
//

#ifndef ACTIVIDAD_4_INVOICE_H
#define ACTIVIDAD_4_INVOICE_H

#endif //ACTIVIDAD_4_INVOICE_H

#include <string>
#include "Customer.h"
#include "InvoiceItem.h"

class Invoice{

private:
    std::string id;
    Customer customer;
    double amount=0;
    InvoiceItem items = null;
    double discount;
    double amountAfterDiscount = amount-discount;


public:
    Invoice();
    Invoice(std::string id, Customer customer, double amount, InvoiceItem items);
    Invoice(std::string id, Customer customer);
    Customer getCustomer();
    void setCustomer(Customer customer);
    double getAmount();
    double getAmountAfterDiscount();

private:
    void recalculateAmount();

public:
    std::string getCustomerName();
    bool addItem(std::string id, std::string description, int quantity, double unitPrice);
    bool addItem(InvoiceItem item);
    bool removeItem(std::string id);
    bool removeItem(InvoiceItem item);
    void updateItem(std::string id, std::string description);
    bool updateItem(std::string id, int quantity);
    bool updateItem(std::string id, double unitPrice);
    bool updateItem(InvoiceItem item);
    std::string toString();
private:
    bool findItem(std::string id);

};