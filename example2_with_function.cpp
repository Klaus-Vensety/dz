#include <iostream>
#include <utility>
#include <string>

std::pair<std::string, int> getPerson() {
    return {"Bob", 30};
}

void printPerson(const std::pair<std::string, int>& p) {
    std::cout << "Name: " << p.first << ", Age: " << p.second << '\n';
}

int main() {
    auto person = getPerson();
    printPerson(person);
    return 0;
}