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

	/* Сумма векторов */
	Vector summ_vector = summ(s_vector, t_vector);
	cout << "Сумма 2 и 3 векторов = ";
	summ_vector.print();

	/* Разница векторов */
	Vector diff_vector = diff(s_vector, t_vector);
	cout << "Разница 2 и 3 векторов = ";
	diff_vector.print();

	/* Произведение векторов */
	Vector mul_vector = multiply(s_vector, t_vector);
	cout << "Произведение 2 и 3 векторов = ";
	mul_vector.print();

	/* Скалярное произведение векторов */
	double s_mul = s_multiply(s_vector, t_vector);
	cout << "Скалярное произведение 2 и 3 векторов = " << s_mul << endl;

	/* Косинус между векторами */
	double cos = calcCos(s_vector, t_vector);
	cout << "Косинус между 2 и 3 векторами = " << cos << endl;

	/* Косинус между векторами */
	double sin = calcSin(s_vector, t_vector);
	cout << "Синус между 2 и 3 векторами = " << sin << endl;

	/* Угол между векторами */
	double angle = calcAngle(s_vector, t_vector);
	cout << "Угол между 2 и 3 векторами = " << angle << endl;
}

