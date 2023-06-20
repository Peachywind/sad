#include "Chef.h"
#include <iostream>

void Chef::viewOrders(const std::vector<Order>& orders) {
    std::cout << "Viewing orders available for preparation:" << std::endl;
    for (const auto& order : orders) {
        if (order.getStatus() == "Received") {
            std::cout << "Order ID: " << order.getId() << std::endl;
            // Implement displaying the details of the order
        }
    }
}

void Chef::startPreparation(Order& order) {
    std::cout << "Starting preparation for order: " << order.getId() << std::endl;
    order.setStatus("In Progress");
    // Implement the process of preparing the order
}

void Chef::enterProductNumber(const std::string& productNumber, Order& order) {
    std::cout << "Entering product number: " << productNumber << " for order: " << order.getId() << std::endl;
    // Implement adding the entered product number to the order
}
