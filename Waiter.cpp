#include "Waiter.h"
#include <iostream>

void Waiter::viewOrdersToServe(const std::vector<Order>& orders) {
    std::cout << "Viewing orders available for serving:" << std::endl;
    for (const auto& order : orders) {
        if (order.getStatus() == "In Progress") {
            std::cout << "Order ID: " << order.getId() << std::endl;
            // Implement displaying the details of the order
        }
    }
}

void Waiter::completeOrder(Order& order) {
    std::cout << "Completing order: " << order.getId() << std::endl;
    order.setStatus("Completed");
    // Implement the process of completing the order
}
