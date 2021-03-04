#include <iostream>

using namespace std;

int main() {
    cout << "Введите возводимое в степень число и целое число -- степень" << endl;

    float a;
    int n;
    cin >> a >> n;

    float result = 1;
    for (int i = 0; i < n; i++)
        result *= a;

    if (n < 0) {
        result = 1 / result;
    }

    cout << result << endl;
}
