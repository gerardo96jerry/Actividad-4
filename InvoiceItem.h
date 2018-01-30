//
// Created by Gerardo Jesus Arguello Haces on 1/29/18.
//

#ifndef ACTIVIDAD_4_INVOICEITEM_H
#define ACTIVIDAD_4_INVOICEITEM_H

#endif //ACTIVIDAD_4_INVOICEITEM_H

#include <string>

class InvoiceItem{

private:
    std::string id;
    std::string description;
    int quantity;
    double unitPrice;

public:
    InvoiceItem();
    InvoiceItem(std::string id, std::string description, int quantity, double unitPrice);
    std::string getID();
    std::string getDescription();
    void setDescription(std::string description);
    int getQuantity();
    bool setQuantity(int quantity);
    double getUnitPrice();
    bool setUnitPrice(double unitPrice);
    double getTotal();
    std::string toString();


};
