#include <iostream>
#include <locale.h>

#include "Vector.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double x = 0, y = 0, z = 0;

	cout << "Введите значение X - "; cin >> x;
	cout << "Введите значение Y - "; cin >> y;
	cout << "Введите значение Z - "; cin >> z;

	system("cls");

	Vector f_vector, s_vector(x, y, z);
	Vector t_vector(s_vector);

	f_vector.print(false);
	cout << ", модуль = " << f_vector.calcAbs() << endl;
	s_vector.print(false);
	cout << ", модуль = " << s_vector.calcAbs() << endl;
	t_vector.print(false);
	cout << ", модуль = " << t_vector.calcAbs() << endl;
}

