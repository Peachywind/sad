#include "Supplier.h"
#include <iostream>

void Supplier::viewOrder(const Order& order) {
    std::cout << "Viewing order: " << order.getId() << std::endl;
    // Implement viewing the order details
}

void Supplier::sendProducts(const Order& order) {
    std::cout << "Sending products for order: " << order.getId() << std::endl;
    // Implement sending the products for the order
}
