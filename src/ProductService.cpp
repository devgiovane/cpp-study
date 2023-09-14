#include "ProductService.hpp"

ProductService::ProductService(ProductPersistence *persistence) {
    this->persistence = persistence;
}

void ProductService::create(std::string name, float price) {
    Product product = Product(std::move(name), price);
    this->persistence->save(product);
}