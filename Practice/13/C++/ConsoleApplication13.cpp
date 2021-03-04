#include <iostream>


using namespace std;

bool is_prime(int n) {
	if (n <= 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false;
		}
	}

	return true;
}


int main() {
	cout << "Введите целое положительное число" << endl;

	int number;
	cin >> number;

	if (is_prime(number)) {
		cout << "Простое" << endl;
	}
	else {
		cout << "Составное" << endl;
	}
}
