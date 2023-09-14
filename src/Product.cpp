#include "Product.hpp"

Product::Product(std::string name, float price) {
    boost::uuids::random_generator generator;
    this->uid = generator();
    this->name = std::move(name);
    this->price = price;
    this->status = Status::Disabled;
}

boost::uuids::uuid Product::getUid() {
    return this->uid;
}

std::string Product::getName() {
    return this->name;
}

float Product::getPrice() {
    return this->price;
}

Status Product::getStatus() {
    return this->status;
}

void Product::enable() {
    if (this->price <= 0) return;
    this->status = Status::Enabled;
}

void Product::disable() {
    if (this->price != 0) return;
    this->status = Status::Disabled;
}

void Product::print() {
    std::cout << "uid: " << this->getUid() << std::endl;
    std::cout << "product: " << this->getName() << std::endl;
    std::cout << "price: R$" << this->getPrice() << std::endl;
    std::cout << "status: " << ((this->getStatus() == Status::Enabled) ? "ENABLED" : "DISABLED") << std::endl;
}