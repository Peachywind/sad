#ifndef ADMINMANAGER_H
#define ADMINMANAGER_H

#include <string>
#include <vector>
#include "Employee.h"
#include "Product.h"

class AdminManager {
private:
    std::vector<Employee> employees;
    std::vector<Product> products;

public:
    AdminManager();

    void addEmployee(const Employee& employee);
    void removeEmployee(const std::string& username);
    void updateEmployee(const std::string& username, const Employee& updatedEmployee);
    Employee* findEmployeeByUsername(const std::string& username);

    void addProduct(const Product& product);
    void removeProduct(const std::string& productId);
    void updateProduct(const std::string& productId, const Product& updatedProduct);
    Product* findProductById(const std::string& productId);

    void printAuditLog() const;
    void writeAuditLog(const std::string& action) const;
};

#endif  // ADMINMANAGER_H
