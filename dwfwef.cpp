#include <iostream>
#include "AdminManager.h"

int main() {
    setlocale(LC_ALL, "ru");
    AdminManager adminManager;

    adminManager.addEmployee(); // Вызов метода для добавления сотрудника

    // Поиск сотрудника
    std::string searchUsername;
    std::cout << "Enter username to search for employee: ";
    std::getline(std::cin, searchUsername);
    adminManager.findEmployeeByUsername(searchUsername); // Вызов метода для поиска сотрудника

    // Обновление сотрудника
    std::string updatedUsername;
    std::cout << "Enter username to update employee: ";
    std::getline(std::cin, updatedUsername);
    adminManager.updateEmployee(updatedUsername); // Вызов метода для обновления сотрудника

    // Удаление сотрудника
    std::string removeUsername;
    std::cout << "Enter username to remove employee: ";
    std::getline(std::cin, removeUsername);
    adminManager.removeEmployee(removeUsername); // Вызов метода для удаления сотрудника

    adminManager.addProduct(); // Вызов метода для добавления продукта

    // Поиск продукта
    std::string searchProductId;
    std::cout << "Enter product ID to search for product: ";
    std::getline(std::cin, searchProductId);
    adminManager.findProductById(searchProductId); // Вызов метода для поиска продукта

    // Обновление продукта
    std::string updatedProductId;
    std::cout << "Enter product ID to update product: ";
    std::getline(std::cin, updatedProductId);
    adminManager.updateProduct(updatedProductId); // Вызов метода для обновления продукта

    // Удаление продукта
    std::string removeProductId;
    std::cout << "Enter product ID to remove product: ";
    std::getline(std::cin, removeProductId);
    adminManager.removeProduct(removeProductId); // Вызов метода для удаления продукта

    adminManager.printAuditLog(); // Вывод аудит-лога

    // Запись в аудит-лог
    std::string action;
    std::cout << "Enter action to write in audit log: ";
    std::getline(std::cin, action);
    adminManager.writeAuditLog(action);

    return 0;
}
