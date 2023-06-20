#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    std::string id;
    std::string name;
    double price;
    double cost;
public:
    Product(const std::string& id, const std::string& name, double price)
        : id(id), name(name), price(price) {}

    std::string getId() const;
    std::string getName() const;
    double getPrice() const;
    double getCost() const;
};

#endif  // PRODUCT_H
