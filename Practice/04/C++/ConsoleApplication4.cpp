#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Введите первое число:" << endl;
    cin >> a ;
    cout << "Введите второе число:" << endl;
    cin >> b;


    // с помощью дополнительной переменной
    a = a - b;
    b = b + a;
    a = b - a;

    cout << "Значение a = " << a << endl;
    cout << "Значение b = " << b << endl;

    // без помощи дополнительной переменной
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Значение a = " << a << endl;
    cout << "Значение b = " << b << endl;

    return 0;
}


