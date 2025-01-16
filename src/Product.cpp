#include <uuid/uuid.h>
#include "Product.hpp"

Product::Product(std::string name, float price) {
    this->uid = Product::generateUuid();
    this->name = std::move(name);
    this->price = price;
    this->status = Status::Disabled;
}

std::string Product::generateUuid() {
    uuid_t uuid;
    uuid_generate(uuid);
    char uuid_str[37];
    uuid_unparse_lower(uuid, uuid_str);
    return uuid_str;
}

std::string Product::getUid() {
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
    if (this->price <= 0) throw std::invalid_argument("price need be than zero");
    this->status = Status::Enabled;
}

void Product::disable() {
    if (this->price != 0) throw std::invalid_argument("price is invalid");
    this->status = Status::Disabled;
}

void Product::print() {
    std::cout << "uid: " << this->getUid() << std::endl;
    std::cout << "product: " << this->getName() << std::endl;
    std::cout << "price: R$" << this->getPrice() << std::endl;
    std::cout << "status: " << ((this->getStatus() == Status::Enabled) ? "ENABLED" : "DISABLED") << std::endl;
}
