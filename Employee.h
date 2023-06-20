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
private:
    std::string name;
    std::string username;
    std::string password;
    Role role;

public:
    Employee(const std::string& name, const std::string& username, const std::string& password, Role role);

    std::string getName() const;
    std::string getUsername() const;
    std::string getPassword() const;
    Role getRole() const;
};

#endif  // EMPLOYEE_H
