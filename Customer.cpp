//
// Created by Gerardo Jesus Arguello Haces on 1/29/18.
//
#include "Customer.h"

Customer::Customer() {
    this->id = 0;
    this->name = "";
    this->discount = 0.0;
}

    Customer::Customer(int id, std::string name, double discount){
        this->id=id;
        this->name=name;
        this->discount=discount;
    }
int Customer::getID() {
    return this->id;
}

std::string Customer::getName() {
    return this->name;
}

double Customer::getDiscount() {
    return this->discount;
}

void Customer::setDiscount(double discount) {
    this->discount=discount;
}

std::string Customer::toString() {
    return this->name + "(" + (std::to_string(id)) + ")";
}