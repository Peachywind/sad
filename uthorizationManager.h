#ifndef AUTHORIZATIONMANAGER_H
#define AUTHORIZATIONMANAGER_H

#include <unordered_map>
#include <string>
#include <functional>

class AuthorizationManager {
private:
    std::unordered_map<std::string, std::string> userCredentials;

    void loadCredentials();
    void saveCredentials();

public:
    AuthorizationManager();
    void registerUser(const std::string& username, const std::string& password);
    bool authenticateUser(const std::string& username, const std::string& password);
    std::string hashPassword(const std::string& password);
};

#endif  // AUTHORIZATIONMANAGER_H
