#include "Header.h"

// Вычисление факториала числа n (n!)
unsigned long long factorial(unsigned int n) {
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Вычисление (n!)!
unsigned long long double_factorial(unsigned int n) {
    unsigned long long fact = factorial(n);
    unsigned long long result = 1;
    for (unsigned long long i = 2; i <= fact; ++i) {
        result *= i;
    }
    return result;
}