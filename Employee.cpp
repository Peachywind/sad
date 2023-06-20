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

void Employee::setName(const std::string& name) {
    this->name = name;
}

void Employee::setUsername(const std::string& username) {
    this->username = username;
}

void Employee::setPassword(const std::string& password) {
    this->password = password;
}

void Employee::setRole(Role role) {
    this->role = role;
}
