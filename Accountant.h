#ifndef ACCOUNTANT_H
#define ACCOUNTANT_H

#include <vector>
#include "Product.h"
#include "Order.h"

class Accountant {
public:
    void viewAllOrders(const std::vector<Order>& orders);
    void viewAllDeliveries(const std::vector<Order>& orders);
    void viewFinancialReport(double balance, const std::vector<Order>& orders);
};

#endif  // ACCOUNTANT_H
