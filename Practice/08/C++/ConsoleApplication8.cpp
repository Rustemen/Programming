#include <iostream>

using namespace std;

int main() {
    cout << "Через пробел введите вещественное число, затем оператор и вещественное число"
        "Пример: \"8 * 3\"." << endl;

    float f, s;
    char op;
    cin >> f >> op >> s;

    float result;
    bool result_exists = true;
    switch (op) {
    case '*':
        result = f * s;
        break;
    case '+':
        result = f + s;
        break;
    case '-':
        result = f - s;
        break;
    case '/':
        if (s == 0) {
            cout << "Ошибка: Деление на 0.";
            result_exists = false;
            break;
        }
        result = f / s;
        break;
    default:
        cout << "Ошибка: неизвестный оператор.";
        result_exists = false;
        break;
    }
    if (result_exists) {
        cout << result << endl;
    }
}
