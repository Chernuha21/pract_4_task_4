#include <iostream>
#include <list>

int main() {
    // 1. ������� ������ � ���������� {3, 6, 9}
    std::list<int> numbers = { 3, 6, 9 };

    // 2. �������������� ��������� ��� �������� �������� ������ � �������� ������� � ��� �� 2
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 2; // ������� �� 2
    }

    // 3. ������� ������� �������� ������
    std::cout << "update of numbers:" << std::endl;
    for (const auto& number : numbers) {
        std::cout << number << std::endl;
    }

    return 0;
}
