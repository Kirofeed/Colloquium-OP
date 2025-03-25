#include "factorial.h"
#include <stdexcept>

// Функция для вычисления факториала числа
unsigned long long factorial(int n) {
    // Проверяем, что n - натуральное число
    if (n < 0) {
        throw std::invalid_argument("Число должно быть натуральным (n >= 0).");
    }

    unsigned long long result = 1;

    // Вычисляем факториал
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

// Функция для получения первых n факториалов
std::vector<unsigned long long> get_factorials(int n) {
    // Проверяем, что n положительное число
    if (n < 1) {
        throw std::invalid_argument("n должно быть положительным числом.");
    }

    std::vector<unsigned long long> factorials;
    
    // Вычисляем факториалы для всех чисел от 0 до n-1
    for (int i = 0; i < n; ++i) {
        factorials.push_back(factorial(i));  // Добавляем факториал для i
    }

    return factorials;
}