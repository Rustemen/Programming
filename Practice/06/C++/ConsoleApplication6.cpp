#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Введите 3 вещественных числа, каждое в отдельной строке" << endl;
	float a, b, c;
	cin >> a >> b >> c;

	if (a == 0) {
		if (b == 0) {
			cout << "Корней нет" << endl;
		}
		else {
			cout << "x = " << -c / b << endl;
		}
	}
	else {
		float d = b * b - 4 * a * c;
		if (d < 0)
			cout << "Не найдено действительных корней" << endl;
		else if (d == 0) {
			cout << "x = " << -b / (2 * a) << endl;
		}
		else {
			float d_sqrt{ std::sqrt(d) };
			float x_one = (-b + d_sqrt) / (2 * a);
			float x_two = (-b - d_sqrt) / (2 * a);

			cout << "x1 = " << x_one << endl;
			cout << "x2 = " << x_two << endl;
		}
	}
}
