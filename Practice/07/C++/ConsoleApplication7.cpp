#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;

    double distance_to(Point other) {
        return std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
    }
};

int main() {


    cout << "Программа для высчитывания площади треугольника \n"
        "Введите цифру, чтобы указать, какой тип данных о треугольнике вы хотите указать.\n"
        "1. Длины стороны треугольника.\n"
        "2. Координаты треугольника." << endl;

    int choice;
    cin >> choice;

    double a, b, c;
    switch (choice) {
    case 1:
        cout << "Введите длины сторон треугольника, каждое с отдельной строки." << endl;
        cin >> a >> b >> c;

        break;
    case 2:
        std::cout << "Введите три пары вещественных чисел, каждая пара с новой строки, \n"
            "числа в паре разделены пробелом. Первое число x, второе y." << endl;
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        
        {
            Point p1{ x1, y1 };
            Point p2{ x2, y2 };
            Point p3{ x3, y3 };

            a = p1.distance_to(p2);
            b = p1.distance_to(p3);
            c = p2.distance_to(p3);
        }

        break;
    default:
        cout << "Ошибка: неизвестный способ ввода" << endl;
        break;
    }

    if (a + b < c || a + c < b || c + b < a)
        cout << "Ошибка: данный треугольник не может существовать на плоскости" << endl;
    else {
        double p = (a + b + c) / 2;
        double S = sqrt(p * (p - a) * (p - b) * (p - c));

        cout << "S = " << S << endl;
    }
}
