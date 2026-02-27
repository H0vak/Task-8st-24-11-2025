#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long long n, reversed = 0;
    cout << "Введіть натуральне (мінімум двух значне) число: ";
    cin >> n;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    cout << "Число у зворотному порядку: " << reversed;

    return 0;
}