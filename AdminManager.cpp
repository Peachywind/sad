#include "AdminManager.h"
#include <iostream>

void AdminManager::addEmployee() {
    std::string name, username, password;
    // Запрос на ввод данных сотрудника
    std::cout << "Enter employee details:" << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, name);
    std::cout << "Username: ";
    std::getline(std::cin, username);
    std::cout << "Password: ";
    std::getline(std::cin, password);

    // Выбор роли
    int roleChoice;
    std::cout << "Select role:\n";
    std::cout << "1. Повар\n";
    std::cout << "2. Складской\n";
    std::cout << "3. Официант\n";
    std::cout << "4. Бухгалтер\n";
    std::cout << "5. Гость\n";
    std::cout << "6. Поставщик\n";
    std::cout << "Enter role number: ";
    std::cin >> roleChoice;
    std::cin.ignore();  // Очистка буфера ввода

    Role role;
    switch (roleChoice) {
    case 1:
        role = Role::Cook;
        break;
    case 2:
        role = Role::Storekeeper;
        break;
    case 3:
        role = Role::Waiter;
        break;
    case 4:
        role = Role::Accountant;
        break;
    case 5:
        role = Role::Guest;
        break;
    case 6:
        role = Role::Supplier;
        break;
    default:
        std::cout << "Invalid role choice. Employee not added." << std::endl;
        return;
    }

    Employee newEmployee(name, username, password, role);
    employees.push_back(newEmployee);

    std::cout << "Employee added successfully." << std::endl;
}

Employee* AdminManager::findEmployeeByUsername(const std::string& username) {
    for (auto& employee : employees) {
        if (employee.getUsername() == username) {
            return &employee;
        }
    }
    return nullptr;  // Сотрудник не найден
}

void AdminManager::updateEmployee(const std::string& username) {
    Employee* employee = findEmployeeByUsername(username);
    if (employee != nullptr) {
        std::string updatedPassword;
        std::cout << "Enter new password for employee: ";
        std::getline(std::cin, updatedPassword);

        // Обновление сотрудника
        employee->setPassword(updatedPassword);

        std::cout << "Employee updated successfully." << std::endl;
    }
    else {
        std::cout << "Employee not found." << std::endl;
    }
}

void AdminManager::removeEmployee(const std::string& username) {
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->getUsername() == username) {
            employees.erase(it);
            std::cout << "Employee removed successfully." << std::endl;
            return;
        }
    }
    std::cout << "Employee not found." << std::endl;
}

void AdminManager::addProduct() {
    std::string productId, productName;
    double productPrice;

    // Запрос на ввод данных о продукте
    std::cout << "Enter product details:" << std::endl;
    std::cout << "Product ID: ";
    std::getline(std::cin, productId);
    std::cout << "Product Name: ";
    std::getline(std::cin, productName);
    std::cout << "Product Price: ";
    std::cin >> productPrice;
    std::cin.ignore();  // Очистка буфера ввода

    Product newProduct(productId, productName, productPrice, 0.0);
    products.push_back(newProduct);

    std::cout << "Product added successfully." << std::endl;
}

Product* AdminManager::findProductById(const std::string& productId) {
    for (auto& product : products) {
        if (product.getId() == productId) {
            return &product;
        }
    }
    return nullptr;  // Продукт не найден
}

void AdminManager::updateProduct(const std::string& productId) {
    Product* product = findProductById(productId);
    if (product != nullptr) {
        std::string updatedProductName;
        double updatedProductPrice;

        std::cout << "Enter updated product name: ";
        std::getline(std::cin, updatedProductName);
        std::cout << "Enter updated product price: ";
        std::cin >> updatedProductPrice;
        std::cin.ignore();  // Очистка буфера ввода

        // Обновление продукта
        product->setName(updatedProductName);
        product->setPrice(updatedProductPrice);

        std::cout << "Product updated successfully." << std::endl;
    }
    else {
        std::cout << "Product not found." << std::endl;
    }
}

void AdminManager::removeProduct(const std::string& productId) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->getId() == productId) {
            products.erase(it);
            std::cout << "Product removed successfully." << std::endl;
            return;
        }
    }
    std::cout << "Product not found." << std::endl;
}

void AdminManager::printAuditLog() {
    std::cout << "Audit Log:" << std::endl;
    for (const auto& logEntry : auditLog) {
        std::cout << logEntry << std::endl;
    }
}

void AdminManager::writeAuditLog(const std::string& action) {
    auditLog.push_back(action);
    std::cout << "Action written to audit log." << std::endl;
}
