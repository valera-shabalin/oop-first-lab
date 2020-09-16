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

	/* Перегрузка оператора присваивания */
	Vector operator = (const Vector& other);

	/* Деструктор */
	~Vector();

	/* Умножение вектора на скаляр */
	void multiplyScalar(double n);

	/* Подсчёт модуля вектора */
	double calcAbs() const;

	/* Подсчёт единичного вектора */
	Vector calcOrt() const;

	/* Вывод вектора в консоль */
	void print(bool linebreak = true) const;

	/* Геттеры */
	double getX() const { return this->x; }
	double getY() const { return this->y; }
	double getZ() const { return this->z; }

	/* Сеттеры */
	void setX(double x) { this->x = x; }
	void setY(double y) { this->y = y; }
	void setZ(double z) { this->z = z; }
};

/* Сумма векторов */
Vector summ(Vector const& f_vector, Vector const& s_vector);

/* Разница векторов */
Vector diff(Vector const& f_vector, Vector const& s_vector);

/* Векторное произведение */
Vector multiply(Vector const& f_vector, Vector const& s_vector);

/* Скарярное двух произведение */
double s_multiply(Vector const& f_vector, Vector const& s_vector);

/* Получение косинуса между векторами */
double calcCos(Vector const& f_vector, Vector const& s_vector);

/* Получение синуса между векторами */
double calcSin(Vector const& f_vector, Vector const& s_vector);

/* Получение угла между векторами */
double calcAngle(Vector const& f_vector, Vector const& s_vector);

#endif

