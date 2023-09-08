#include "Product.h"

int main() {
    Product beer = Product("beer", 3.90);
    beer.enable();
    beer.print();
    return 0;
}