//
// Created by Gerardo Jesus Arguello Haces on 1/29/18.
//

#include "InvoiceItem.h"

InvoiceItem::InvoiceItem() {
    this->id="";
    this->description="";
    this->quantity=0;
    this->unitPrice=0.0;

}

InvoiceItem::InvoiceItem(std::string id, std::string description, int quantity, double unitPrice) {
    this->id=id;
    this->description=description;
    this->quantity=quantity;
    this->unitPrice=unitPrice;

}

std::string InvoiceItem::getID() {
    return this->id;
}

std::string InvoiceItem::getDescription() {
    return this->description;
}

void InvoiceItem::setDescription(std::string description) {
    this->description=description;
}

int InvoiceItem::getQuantity() {
    return this->quantity;
}

bool InvoiceItem::setQuantity(int quantity) {
    this->quantity=quantity;
}

double InvoiceItem::getUnitPrice() {
    return this->unitPrice;
}

bool InvoiceItem::setUnitPrice(double unitPrice) {
    this->unitPrice=unitPrice;
}

double InvoiceItem::getTotal() {
    return this->unitPrice*quantity;
}

std::string InvoiceItem::toString() {
    return this->("InvoiceItem[id =" + id + ", description =" + description + ", quantity = " + quantity + ", unitPrice =" + unitPrice);
}
