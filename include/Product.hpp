#ifndef STUDY_PRODUCT_HPP
#define STUDY_PRODUCT_HPP

#include <string>
#include <cstdint>
#include <utility>
#include <iostream>

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

enum Status { Enabled = 1, Disabled };

class Product {
private:
    boost::uuids::uuid uid{};
    std::string name;
    float price;
    Status status;

public:
    Product(std::string name, float price);
    boost::uuids::uuid getUid();
    std::string getName();
    float getPrice();
    Status getStatus();
    void enable();
    void disable();
    void print();
};

#endif //STUDY_PRODUCT_HPP
