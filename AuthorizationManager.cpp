#include <iostream>
#include <fstream>
#include "uthorizationManager.h"

AuthorizationManager::AuthorizationManager() {
    loadCredentials();
}

void AuthorizationManager::loadCredentials() {
    std::ifstream file("credentials.txt");
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::string username, password;
            size_t separatorPos = line.find(':');
            if (separatorPos != std::string::npos) {
                username = line.substr(0, separatorPos);
                password = line.substr(separatorPos + 1);
                userCredentials[username] = password;
            }
        }
        file.close();
    }
}

void AuthorizationManager::saveCredentials() {
    std::ofstream file("credentials.txt");
    if (file.is_open()) {
        for (const auto& pair : userCredentials) {
            file << pair.first << ":" << pair.second << "\n";
        }
        file.close();
    }
}

void AuthorizationManager::registerUser(const std::string& username, const std::string& password) {
    std::string hashedPassword = hashPassword(password);
    userCredentials[username] = hashedPassword;
    saveCredentials();
}

bool AuthorizationManager::authenticateUser(const std::string& username, const std::string& password) {
    std::string hashedPassword = hashPassword(password);

    auto it = userCredentials.find(username);
    if (it != userCredentials.end()) {
        if (it->second == hashedPassword) {
            std::cout << "Authentication successful!" << std::endl;
            return true;
        }
    }

    std::cout << "Invalid username or password!" << std::endl;
    return false;
}

std::string AuthorizationManager::hashPassword(const std::string& password) {
    // Хэширование пароля (SHA-256)
    std::hash<std::string> hashFunc;
    return std::to_string(hashFunc(password));
}
