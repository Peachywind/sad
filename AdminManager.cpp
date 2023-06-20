#include "AdminManager.h"
#include <iostream>
#include <fstream>
#include "Employee.h"

AdminManager::AdminManager() {}

void AdminManager::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void AdminManager::removeEmployee(const std::string& username) {
    employees.erase(std::remove_if(employees.begin(), employees.end(), [&](const Employee& employee) {
        return employee.getUsername() == username;
        }), employees.end());
}

void AdminManager::updateEmployee(const std::string& username, const Employee& updatedEmployee) {
    for (auto& employee : employees) {
        if (employee.getUsername() == username) {
            employee = updatedEmployee;
            break;
        }
    }
}

Employee* AdminManager::findEmployeeByUsername(const std::string& username) {
    for (auto& employee : employees) {
        if (employee.getUsername() == username) {
            return &employee;
        }
    }
    return nullptr;
}

void AdminManager::addProduct(const Product& product) {
    products.push_back(product);
}

void AdminManager::removeProduct(const std::string& productId) {
    products.erase(std::remove_if(products.begin(), products.end(), [&](const Product& product) {
        return product.getId() == productId;
        }), products.end());
}

void AdminManager::updateProduct(const std::string& productId, const Product& updatedProduct) {
    for (auto& product : products) {
        if (product.getId() == productId) {
            product = updatedProduct;
            break;
        }
    }
}

Product* AdminManager::findProductById(const std::string& productId) {
    for (auto& product : products) {
        if (product.getId() == productId) {
            return &product;
        }
    }
    return nullptr;
}

void AdminManager::printAuditLog() const {
    std::ifstream file("audit_log.txt");
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    }
}

void AdminManager::writeAuditLog(const std::string& action) const {
    std::ofstream file("audit_log.txt", std::ios_base::app);
    if (file.is_open()) {
        file << action << std::endl;
        file.close();
    }
}
