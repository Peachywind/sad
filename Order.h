#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>

class Order {
private:
    std::string id;
    std::vector<std::string> productIds;
    std::string status;

public:
    Order(const std::string& id, const std::vector<std::string>& productIds);

    std::string getId() const;
    std::vector<std::string> getProductIds() const;
    std::string getStatus() const;
    void setStatus(const std::string& status);
};

#endif  // ORDER_H
