#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <vector>
#include "Product.h"
#include "Order.h"

class Supplier {
public:
    void viewOrder(const Order& order);
    void sendProducts(const Order& order);
};

#endif  // SUPPLIER_H
