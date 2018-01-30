//
// Created by Gerardo Jesus Arguello Haces on 1/29/18.
//

#include "Invoice.h"
#include "Customer.h"

Invoice::Invoice() {
    this->id="";
    this->customer;
    this->amount=0;
    this->items;
}

Invoice::Invoice(std::string id, Customer customer, double amount, InvoiceItem items) {
    this->id=id;
    this->customer=customer;
    this->amount=amount;
    this->items=items;
}

Invoice::Invoice(std::string id, Customer customer) {
    this->id=id;
    this->customer=customer;
}

Customer Invoice::getCustomer() {
    return this->customer;
}

void Invoice::setCustomer(Customer customer) {
    this->customer=customer;
}

double Invoice::getAmount() {
    return this->amount=amount;
}

double Invoice::getAmountAfterDiscount() {
    return this->amount-discount;
}

std::string Invoice::toString() {
    return this->("Invoice[id="+id+", customer id="+customerID+", customer name="+customerName+", Items={Item[id="+id+
                          ", description="+description+", quantity="+quantity+", unit price="+unitPrice+", line total="+total+"]}, "+
                          "gross amount="+amount+", discount amount="+discount+", amount after discount="+amountAfterDiscount);
}



