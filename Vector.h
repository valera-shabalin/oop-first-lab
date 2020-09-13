#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
	double x, y, z;

public:
	/* Конструктор */
	Vector(double x = 0, double y = 0, double z = 0);

	/* Конструктор копирования */
	Vector(const Vector& other);

	/* Деструктор */
	~Vector();

	/* Вывод вектора в консоль */
	void print(bool linebreak = true);

	/* Подсчёт модуля вектора */
	double calcAbs();

	/* Геттеры */
	double getX() { return this->x; }
	double getY() { return this->y; }
	double getZ() { return this->z; }

	/* Сеттеры */
	void setX(double x) { this->x = x; }
	void setY(double y) { this->y = y; }
	void setZ(double z) { this->z = z; }
};

#endif

