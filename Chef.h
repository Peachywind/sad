#ifndef CHEF_H
#define CHEF_H

#include <vector>
#include "Order.h"
#include "Product.h"

class Chef {
public:
    void viewOrders(const std::vector<Order>& orders);
    void startPreparation(Order& order);
    void enterProductNumber(const std::string& productNumber, Order& order);
};

#endif  // CHEF_H
