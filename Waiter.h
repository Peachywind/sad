#ifndef WAITER_H
#define WAITER_H

#include <vector>
#include "Order.h"

class Waiter {
public:
    void viewOrdersToServe(const std::vector<Order>& orders);
    void completeOrder(Order& order);
};

#endif  // WAITER_H
