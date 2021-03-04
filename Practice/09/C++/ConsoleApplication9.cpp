#include <iostream>
#include <sstream>

using namespace std;

const int MINUTES_IN_HOUR = 60;

int main() {
    cout << "Введите 2 значения времени в формате \"ЧЧ:ММ\" " << endl;
    int h1, m1, h2, m2;
    char temp;
    cin >> h1 >> temp >> m1 >> h2 >> temp >> m2;
    m1 += h1 * MINUTES_IN_HOUR;
    m2 += h2 * MINUTES_IN_HOUR;

    if (abs(m1 - m2) <= 15) {
        cout << "Встреча состоится!" << endl;
    }
    else {
        cout << "Встреча не состоится!" << endl;
    }
}
