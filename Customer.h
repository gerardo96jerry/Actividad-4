//
// Created by Gerardo Jesus Arguello Haces on 1/29/18.
//

#ifndef ACTIVIDAD_4_CUSTOMER_H
#define ACTIVIDAD_4_CUSTOMER_H

#endif //ACTIVIDAD_4_CUSTOMER_H

#include <string>
class Customer{

private:
    int id;
    std::string name;
    double discount;

public:
    Customer();
    Customer(int id, std::string name, double discount);
    int getID();
    std::string getName();
    double getDiscount();
    void setDiscount(double discount);
    std::string toString();
};
