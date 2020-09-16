#include <iostream>

#include "Vector.h"

using namespace std;

int Vector::static_id = 1;

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
	cout << "Сумма " << s_vector.getID() << " и " << t_vector.getID() << " векторов = ";
	summ_vector.print();

	/* Разница векторов */
	Vector diff_vector = diff(s_vector, t_vector);
	cout << "Разница " << s_vector.getID() << " и " << t_vector.getID() << " векторов = ";
	diff_vector.print();

	/* Произведение векторов */
	Vector mul_vector = multiply(s_vector, t_vector);
	cout << "Произведение " << s_vector.getID() << " и " << t_vector.getID() << " векторов = ";
	mul_vector.print();

	/* Скалярное произведение векторов */
	double s_mul = s_multiply(s_vector, t_vector);
	cout << "Скалярное произведение " << s_vector.getID() << " и " << t_vector.getID() << " векторов = " << s_mul << endl;

	/* Косинус между векторами */
	double cos = calcCos(s_vector, t_vector);
	cout << "Косинус между " << s_vector.getID() << " и " << t_vector.getID() << " векторами = " << cos << endl;

	/* Косинус между векторами */
	double sin = calcSin(s_vector, t_vector);
	cout << "Синус между " << s_vector.getID() << " и " << t_vector.getID() << " векторами = " << sin << endl;

	/* Угол между векторами */
	double angle = calcAngle(s_vector, t_vector);
	cout << "Угол между " << s_vector.getID() << " и " << t_vector.getID() << " векторами = " << angle << endl;
}

