#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double length, width;

    // Ввод длины и ширины прямоугольника
    cout << "Введите длину прямоугольника: ";
    if (!(cin >> length) || length <= 0) {
        cout << "Ошибка: длина должна быть положительным числом." << endl;
        return -1;
    }

    cout << "Введите ширину прямоугольника: ";
    if (!(cin >> width) || width <= 0) {
        cout << "Ошибка: ширина должна быть положительным числом." << endl;
        return -1;
    }

    // Вычисление периметра
    double perimeter = 2 * (length + width);
    cout << "Периметр прямоугольника: " << perimeter << endl;

    // Вычисление площади
    double area = length * width;
    cout << "Площадь прямоугольника: " << area << endl;

    // Вычисление длины диагонали
    double diagonal = sqrt(length * length + width * width);
    cout << "Длина диагонали прямоугольника: " << diagonal << endl;

    return 0;
}