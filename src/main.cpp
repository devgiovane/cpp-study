#include "ProductService.hpp"

int main() {
    ProductPersistence persistence = ProductPersistence();
    auto service = ProductService(&persistence);
    service.create("beer", 3.9);
    return 0;
}