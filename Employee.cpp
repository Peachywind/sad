#include "Employee.h"

Employee::Employee(const std::string& name, const std::string& username, const std::string& password, Role role)
    : name(name), username(username), password(password), role(role) {}

std::string Employee::getName() const {
    return name;
}

std::string Employee::getUsername() const {
    return username;
}

std::string Employee::getPassword() const {
    return password;
}

Role Employee::getRole() const {
    return role;
}
