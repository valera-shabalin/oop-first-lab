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

	/* Вывод вектора в консоль */
	void print(const bool linebreak = true) const;

	/* Геттеры */
	double getX() const { return this->x; }
	double getY() const { return this->y; }
	double getZ() const { return this->z; }
	int getID() const { return this->id; }

	/* Сеттеры */
	Vector& set(double x, double y, double z) {
		this->x = x; this->y = y; this->z = z;
		return *this;
	}
	Vector& setX(double x) { this->x = x; return *this; }
	Vector& setY(double y) { this->y = y; return *this; }
	Vector& setZ(double z) { this->z = z; return *this; }
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

