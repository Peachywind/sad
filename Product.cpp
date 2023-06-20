#include "Product.h"

Product::Product(const std::string& id, const std::string& name, double price, double quantity)
    : id(id), name(name), price(price), quantity(quantity) {}

std::string Product::getId() const {
    return id;
}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

double Product::getQuantity() const {
    return quantity;
}

double Product::getCost() const {
    return price * quantity;
}

void Product::setName(const std::string& name) {
    this->name = name;
}

void Product::setPrice(double price) {
    this->price = price;
}
