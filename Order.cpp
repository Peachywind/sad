#include "Order.h"

Order::Order(const std::string& id, const std::vector<std::string>& productIds)
    : id(id), productIds(productIds), status("Created") {}

std::string Order::getId() const {
    return id;
}

std::vector<std::string> Order::getProductIds() const {
    return productIds;
}

std::string Order::getStatus() const {
    return status;
}

void Order::setStatus(const std::string& status) {
    this->status = status;
}
