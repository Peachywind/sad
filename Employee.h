#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

enum class Role {
    Cook,
    Storekeeper,
    Waiter,
    Accountant,
    Guest,
    Supplier
};

class Employee {
public:
    Employee(const std::string& name, const std::string& username, const std::string& password, Role role);

    // Геттеры
    std::string getName() const;
    std::string getUsername() const;
    std::string getPassword() const;
    Role getRole() const;

    // Сеттеры
    void setName(const std::string& name);
    void setUsername(const std::string& username);
    void setPassword(const std::string& password);
    void setRole(Role role);

private:
    std::string name;
    std::string username;
    std::string password;
    Role role;
};

#endif  // EMPLOYEE_H
