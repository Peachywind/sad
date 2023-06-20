#include "Accountant.h"
#include <iostream>

void Accountant::viewAllOrders(const std::vector<Order>& orders) {
    std::cout << "Viewing all orders:" << std::endl;
    for (const auto& order : orders) {
        std::cout << "Order ID: " << order.getId() << ", Status: " << order.getStatus() << std::endl;
    }
}

void Accountant::viewAllDeliveries(const std::vector<Order>& orders) {
    std::cout << "Viewing all deliveries:" << std::endl;
    for (const auto& order : orders) {
        if (order.getStatus() == "Delivered") {
            std::cout << "Order ID: " << order.getId() << std::endl;
            // Implement displaying the delivered products for the order
        }
    }
}

void Accountant::viewFinancialReport(double balance, const std::vector<Order>& orders) {
    std::cout << "Financial Report:" << std::endl;
    std::cout << "Balance: " << balance << std::endl;

    double totalSales = 0.0;
    double totalExpenses = 0.0;

    for (const auto& order : orders) {
        if (order.getStatus() == "Delivered") {
            // Calculate the total sales amount from the delivered orders
            // Update totalExpenses based on the cost of products in the order
        }
    }

    std::cout << "Total Sales: " << totalSales << std::endl;
    std::cout << "Total Expenses: " << totalExpenses << std::endl;
    std::cout << "Profit: " << (totalSales - totalExpenses) << std::endl;
}
