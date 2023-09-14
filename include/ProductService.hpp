#ifndef STUDY_PRODUCTSERVICE_HPP
#define STUDY_PRODUCTSERVICE_HPP

#include <string>
#include <utility>
#include "Product.hpp"
#include "ProductPersistence.hpp"

class ProductService {
private:
    ProductPersistence *persistence;
public:
    ProductService(ProductPersistence *persistence);
    void create(std::string name, float price);
};

#endif //STUDY_PRODUCTSERVICE_HPP
