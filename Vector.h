#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
	double x, y, z;

public:
	/* Конструктор */
	Vector(double x = 0, double y = 0, double z = 0);

	/* Деструктор */
	~Vector();

	/* Вывод вектора в консоль */
	void print(bool linebreak = true);

	/* Подсчёт модуля вектора */
	double calcAbs();
};

#endif

