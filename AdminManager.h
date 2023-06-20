#ifndef ADMINMANAGER_H
#define ADMINMANAGER_H

#include <vector>
#include "Employee.h"
#include "Product.h"

class AdminManager {
public:
    void addEmployee();
    Employee* findEmployeeByUsername(const std::string& username);
    void updateEmployee(const std::string& username);
    void removeEmployee(const std::string& username);

    void addProduct();
    Product* findProductById(const std::string& productId);
    void updateProduct(const std::string& productId);
    void removeProduct(const std::string& productId);

    void printAuditLog();
    void writeAuditLog(const std::string& action);

private:
    std::vector<Employee> employees;
    std::vector<Product> products;
    std::vector<std::string> auditLog;
};

#endif  // ADMINMANAGER_H
