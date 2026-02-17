#include <iostream>
#include <utility>
#include <string>

int main() {
    std::pair<int, std::string> person(25, "Alice");
    std::cout << "Age: " << person.first << ", Name: " << person.second << '\n';

    auto point = std::make_pair(3.5, 2.1);
    std::cout << "x = " << point.first << ", y = " << point.second << '\n';

    std::pair<int, int> a(1, 2), b(1, 3);
    if (a < b)
        std::cout << "a is less than b\n";

    return 0;
}