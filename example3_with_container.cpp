#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <string>

int main() {
    std::vector<std::pair<std::string, int>> grades;
    grades.push_back({"Alice", 5});
    grades.emplace_back("Bob", 4);
    grades.push_back(std::make_pair("Charlie", 3));

    for (const auto& [name, grade] : grades) {
        std::cout << name << ": " << grade << '\n';
    }

    std::map<std::string, double> products;
    products.insert({"apple", 1.5});
    products.insert(std::make_pair("banana", 2.0));

    for (const auto& [product, price] : products) {
        std::cout << product << " costs " << price << '\n';
    }

    return 0;
}