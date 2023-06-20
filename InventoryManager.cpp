#include "InventoryManager.h"
#include <algorithm>

void InventoryManager::addProduct(const Product& product) {
    products.push_back(product);
}

void InventoryManager::removeProduct(const std::string& productId) {
    products.erase(std::remove_if(products.begin(), products.end(), [&](const Product& product) {
        return product.getId() == productId;
        }), products.end());
}

void InventoryManager::updateProduct(const std::string& productId, const Product& updatedProduct) {
    for (auto& product : products) {
        if (product.getId() == productId) {
            product = updatedProduct;
            break;
        }
    }
}

Product* InventoryManager::findProductById(const std::string& productId) {
    for (auto& product : products) {
        if (product.getId() == productId) {
            return &product;
        }
    }
    return nullptr;
}
