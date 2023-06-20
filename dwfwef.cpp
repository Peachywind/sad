#include <iostream>
#include "AdminManager.h"
#include "Employee.h"

int main() {
    AdminManager adminManager;

    // Добавление сотрудника
    std::string name, username, password;
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
        std::cout << "Invalid role choice. Exiting program." << std::endl;
        return 0;
    }

    Employee employee1(name, username, password, role);
    adminManager.addEmployee(employee1);

    // Поиск сотрудника по имени пользователя
    std::string searchUsername;
    std::cout << "Enter username to search for employee: ";
    std::getline(std::cin, searchUsername);

    Employee* foundEmployee = adminManager.findEmployeeByUsername(searchUsername);
    if (foundEmployee != nullptr) {
        std::cout << "Employee found: " << foundEmployee->getName() << std::endl;
        std::cout << "Role: " << static_cast<int>(foundEmployee->getRole()) << std::endl;
    }
    else {
        std::cout << "Employee not found." << std::endl;
    }

    // Обновление сотрудника
    std::string updatedPassword;
    std::cout << "Enter new password for employee: ";
    std::getline(std::cin, updatedPassword);

    Employee updatedEmployee(foundEmployee->getName(), foundEmployee->getUsername(), updatedPassword, foundEmployee->getRole());
    adminManager.updateEmployee(foundEmployee->getUsername(), updatedEmployee);

    // Удаление сотрудника
    std::string removeUsername;
    std::cout << "Enter username to remove employee: ";
    std::getline(std::cin, removeUsername);
    adminManager.removeEmployee(removeUsername);

    // Добавление продукта
    std::string productId, productName;
    double productPrice;
    std::cout << "Enter product details:" << std::endl;
    std::cout << "Product ID: ";
    std::getline(std::cin, productId);
    std::cout << "Product Name: ";
    std::getline(std::cin, productName);
    std::cout << "Product Price: ";
    std::cin >> productPrice;
    std::cin.ignore();  // Очистка буфера ввода

    Product product1(productId, productName, productPrice, 0.0);

    adminManager.addProduct(product1);

    // Поиск продукта по идентификатору
    std::string searchProductId;
    std::cout << "Enter product ID to search for product: ";
    std::getline(std::cin, searchProductId);

    Product* foundProduct = adminManager.findProductById(searchProductId);
    if (foundProduct != nullptr) {
        std::cout << "Product found: " << foundProduct->getName() << std::endl;
        std::cout << "Price: " << foundProduct->getPrice() << std::endl;
    }
    else {
        std::cout << "Product not found." << std::endl;
    }

    // Обновление продукта
    std::string updatedProductName;
    double updatedProductPrice;
    std::cout << "Enter updated product name: ";
    std::getline(std::cin, updatedProductName);
    std::cout << "Enter updated product price: ";
    std::cin >> updatedProductPrice;
    std::cin.ignore();  // Очистка буфера ввода

    Product product1(productId, productName, productPrice, 0.0);

    adminManager.updateProduct(searchProductId, updatedProduct);

    // Удаление продукта
    std::string removeProductId;
    std::cout << "Enter product ID to remove product: ";
    std::getline(std::cin, removeProductId);
    adminManager.removeProduct(removeProductId);

    // Вывод аудит-лога
    std::cout << "Audit Log:" << std::endl;
    adminManager.printAuditLog();

    // Запись в аудит-лог
    std::string action;
    std::cout << "Enter action to write in audit log: ";
    std::getline(std::cin, action);
    adminManager.writeAuditLog(action);

    return 0;
}
