#include <iostream>

#include "Vector.h"
#include "Functions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double x = 0, y = 0, z = 0;

	cout << "Введите значение X - "; cin >> x;
	cout << "Введите значение Y - "; cin >> y;
	cout << "Введите значение Z - "; cin >> z;

	system("cls");

	/* Инициализация векторов */
	Vector f_vector, s_vector(x, y, z), t_vector(1, 2, 3);

	double cos = calcCos(s_vector, t_vector);
	cout << cos;
}

