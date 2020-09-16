#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
	static int static_id;
	int id;
	double x, y, z;

public:
	/* Конструктор */
	Vector(double x = 0, double y = 0, double z = 0);

	/* Конструктор копирования */
	Vector(const Vector& other);

	/* Перегрузка оператора присваивания */
	const Vector& operator = (const Vector& other);

	/* Деструктор */
	~Vector();

	/* Умножение вектора на скаляр */
	Vector& multiplyScalar(const double n);

	/* Подсчёт модуля вектора */
	double calcAbs() const;

	/* Подсчёт единичного вектора */
	Vector calcOrt() const;

	/* Создание единичного вектора */
	Vector& toOrt();

	/* Вывод вектора в консоль */
	void print(const bool linebreak = true) const;

	/* Геттеры */
	double getX() const;
	double getY() const;
	double getZ() const;
	int getID() const;

	/* Сеттеры */
	Vector& set(double x, double y, double z);
	Vector& setX(double x);
	Vector& setY(double y);
	Vector& setZ(double z);
};

/* Сумма векторов */
Vector summ(const Vector& f_vector, const Vector& s_vector);

/* Разница векторов */
Vector diff(const Vector& f_vector, const Vector& s_vector);

/* Векторное произведение */
Vector multiply(const Vector& f_vector, const Vector& s_vector);

/* Скарярное двух произведение */
double s_multiply(const Vector& f_vector, const Vector& s_vector);

/* Получение косинуса между векторами */
double calcCos(const Vector& f_vector, const Vector& s_vector);

/* Получение синуса между векторами */
double calcSin(const Vector& f_vector, const Vector& s_vector);

/* Получение угла между векторами */
double calcAngle(const Vector& f_vector, const Vector& s_vector);

#endif

