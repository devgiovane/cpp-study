#ifndef STUDY_PRODUCT_HPP
#define STUDY_PRODUCT_HPP

#include <string>
#include <iostream>

enum Status { Enabled = 1, Disabled };

class Product {
private:
    std::string uid;
    std::string name;
    float price;
    Status status;
    static std::string generateUuid();

public:
    Product(std::string name, float price);
    std::string getUid();
    std::string getName();
    float getPrice();
    Status getStatus();
    void enable();
    void disable();
    void print();
};

#endif //STUDY_PRODUCT_HPP
