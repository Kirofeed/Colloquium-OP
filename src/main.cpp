// main.cpp
#include <iostream>
#include "factorial.h"

int main() {
    try {
        int n;
        std::cout << "Введите натуральное число n: ";
        std::cin >> n;

        std::vector<unsigned long long> factorials = get_factorials(n);

        std::cout << "Первые " << n << " факториала(ов):\n";
        for (int i = 0; i < n; ++i) {
            std::cout << "Факториал " << i << " = " << factorials[i] << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}