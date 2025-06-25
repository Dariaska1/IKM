#include "Header.h"

// Вычисление факториала числа n (n!)
long double factorial(unsigned int n) {
    long double result = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Вычисление (n!)!
long double double_factorial(unsigned int n) {
    long double fact = factorial(n);
    long double result = 1;
    for (long double i = 2; i <= fact; ++i) {
        result *= i;
    }
    return result;
}
