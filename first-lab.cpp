#include <iostream>
#include <locale.h>

#include "Vector.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	Vector f_vector, s_vector(2, 3, 4);
	f_vector.print(false);
	cout << ", модуль = " << f_vector.calcAbs() << endl;
	s_vector.print(false);
	cout << ", модуль = " << s_vector.calcAbs() << endl;
}

