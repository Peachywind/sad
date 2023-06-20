#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include <vector>
#include "Product.h"

class InventoryManager {
private:
    std::vector<Product> products;

public:
    void addProduct(const Product& product);
    void removeProduct(const std::string& productId);
    void updateProduct(const std::string& productId, const Product& updatedProduct);
    Product* findProductById(const std::string& productId);
};

#endif  // INVENTORYMANAGER_H
