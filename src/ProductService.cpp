#include "ProductService.hpp"

ProductService::ProductService(ProductPersistence *persistence) {
    this->persistence = persistence;
}

void ProductService::create(std::string name, float price) {
    auto product = Product(std::move(name), price);
    product.enable();
    this->persistence->save(product);
}