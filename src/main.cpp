#include <json/json.h>
#include "ProductService.hpp"

int main() {
    auto persistence = ProductPersistence();
    auto service = ProductService(&persistence);
    service.create("beer", 3.9);
    return 0;
}