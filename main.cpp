#include "Header.h"

int main() {
    setlocale(LC_ALL, "ru");
    unsigned int n;
    cout << "Введите значение n (n >= 3): ";             //запрос ввести значение n
    cin >> n;

    if (n < 3) {                                         //проверка n на соответсвие условию
        cout << "Ошибка: n должно быть >= 3" << endl;   
        return 1;
    }

    unsigned long long result = double_factorial(n);
    cout << "(" << n << "!)! = " << result << endl;

    return 0;
}
