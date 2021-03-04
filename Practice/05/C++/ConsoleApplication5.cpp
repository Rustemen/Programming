#include <iostream>

using namespace std;

// x(t) = x0 + v0t - (at²)/2

float x(float x0, float v0, float a, float t) {
    return x0 + v0 * t - (a * t * t) / 2;
}

int main()
{
    float x0, v0, t;
    float g = 9.8;

    cout << "Введите x₀, v₀ и t, через пробел" << endl;
    cin >> x0 >> v0 >> t;

    float distance = abs(x0 - x(x0, v0, g, t));
    cout << distance << endl;
}


