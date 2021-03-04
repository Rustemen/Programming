#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n1, n2, result;
    double n3, n4, res;

    cout << "Введите число 1" << endl;
    cin >> n1;
    cout << "Введите число 2" << endl;
    cin >> n2;
    cout << "Введите число 3" << endl;
    cin >> n3;
    cout << "Введите число 4" << endl;
    cin >> n4;

    cout << "int, int" << endl;

    result = n1 + n2;
    cout << n1 << "+" << n2 << "=" << result << endl;
    result = n1 - n2;
    cout << n1 << "-" << n2 << "=" << result << endl;
    result = n1 * n2;
    cout << n1 << "*" << n2 << "=" << result << endl;
    result = n1 / n2;
    cout << n1 << "/" << n2 << "=" << result << endl;

    cout << "double, double" << endl;

    res = n3 + n4;
    cout << n3 << "+" << n4 << "=" << res << endl;
    res = n3 - n4;
    cout << n3 << "-" << n4 << "=" << res << endl;
    res = n3 * n4;
    cout << n3 << "*" << n4 << "=" << res << endl;
    res = n3 / n4;
    cout << n3 << "/" << n4 << "=" << res << endl;

    cout << "int, double" << endl;

    res = n1 + n3;
    cout << n1 << "+" << n3 << "=" << res << endl;
    res = n1 - n3;
    cout << n1 << "-" << n3 << "=" << res << endl;
    res = n1 * n3;
    cout << n1 << "*" << n3 << "=" << res << endl;
    res = n1 / n3;
    cout << n1 << "/" << n3 << "=" << res << endl;

    cout << "double, int" << endl;

    res = n4 + n2;
    cout << n4 << "+" << n2 << "=" << res << endl;
    res = n4 - n2;
    cout << n4 << "-" << n2 << "=" << res << endl;
    res = n4 * n2;
    cout << n4 << "*" << n2 << "=" << res << endl;
    res = n4 / n2;
    cout << n4 << "/" << n2 << "=" << res << endl;



        
        return 0;
}

