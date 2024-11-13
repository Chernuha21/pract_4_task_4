#include <iostream>
#include <list>

int main() {
    // 1. Створіть список з елементами {3, 6, 9}
    std::list<int> numbers = { 3, 6, 9 };

    // 2. Використовуйте ітератори для перебору елементів списку і множення кожного з них на 2
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 2; // множимо на 2
    }

    // 3. Виведіть оновлені значення списку
    std::cout << "update of numbers:" << std::endl;
    for (const auto& number : numbers) {
        std::cout << number << std::endl;
    }

    return 0;
}
