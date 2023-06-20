#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(const std::string& id, const std::string& name, double price, double quantity);

    // Геттеры
    std::string getId() const;
    std::string getName() const;
    double getPrice() const;
    double getQuantity() const;
    double getCost() const;

    // Сеттеры
    void setName(const std::string& name);
    void setPrice(double price);

private:
    std::string id;
    std::string name;
    double price;
    double quantity;
};

#endif  // PRODUCT_H
