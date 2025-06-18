#include <iostream>
#include <locale>
#include "Header.h"

int main() {
    setlocale(LC_ALL, "ru");
    unsigned int n;
    std::cout << "������� �������� n (n >= 3): ";
    std::cin >> n;
    if (n < 3) {
        std::cout << "������: n ������ ���� >= 3\n";
        return 1;
    }

    unsigned long long result = double_factorial(n);
    std::cout << "(" << n << "!)! = " << result << std::endl;

    return 0;
}