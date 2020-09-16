#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

#include "Vector.h"

using namespace std;

int Vector::static_id = 1;

/* Конструктор */
Vector::Vector(double x, double y, double z) {
	this->set(x, y, z);
	this->id = static_id++;
	cout << "Вызвался конструктор, id - " << this->id << endl;
}

/* Конструктор копирования */
Vector::Vector(const Vector &other) {
	this->set(other.x, other.y, other.z);
	this->id = static_id++;
	cout << "Вызвался конструктор копирования, id - " << this->id << endl;
}

/* Перегрузка оператора присваивания */
const Vector& Vector::operator = (const Vector& other) {
	if (this == &other) return *this;
	this->set(other.x, other.y, other.z);
	return *this;
}

/* Деструктор */
Vector::~Vector() {
	cout << "Вызвался деструктор, id - " << this->id << endl;
}

/* Умножение вектора на скаляр */
Vector& Vector::multiplyScalar(const double n) {
	this->x *= n; 
	this->y *= n; 
	this->z *= n;
	return *this;
}

/* Подсчёт модуля вектора */
double Vector::calcAbs() const {
	return(sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2)));
}

/* Подсчёт единичного вектора */
Vector Vector::calcOrt() const {
	return(Vector(*this).toOrt());
}

/* Создание единичного вектора */
Vector& Vector::toOrt() {
	double abs = this->calcAbs();
	this->x / abs; 
	this->y / abs; 
	this->z / abs;
	return *this;
}

/* Вывод вектора в консоль */
void Vector::print(const bool linebreak) const {
	cout << "[" << x << "," << y << "," << z << "]";
	if (linebreak) cout << endl;
}

/* Геттеры */
double Vector::getX() const { return this->x; }
double Vector::getY() const { return this->y; }
double Vector::getZ() const { return this->z; }
int Vector::getID() const { return this->id; }

/* Сеттеры */
Vector& Vector::set(double x, double y, double z) {
	this->x = x; this->y = y; this->z = z;
	return *this;
}
Vector& Vector::setX(double x) { this->x = x; return *this; }
Vector& Vector::setY(double y) { this->y = y; return *this; }
Vector& Vector::setZ(double z) { this->z = z; return *this; }

/* Сумма векторов */
Vector summ(const Vector& f_vector, const Vector& s_vector) {
	return(Vector(
			f_vector.getX() + s_vector.getX(), 
			f_vector.getY() + s_vector.getY(), 
			f_vector.getZ() + s_vector.getZ()	
		)
	);
}

/* Разница векторов */
Vector diff(const Vector& f_vector, const Vector& s_vector) {
	return(Vector(
			f_vector.getX() - s_vector.getX(), 
			f_vector.getY() - s_vector.getY(), 
			f_vector.getZ() - s_vector.getZ()
		)
	);
}

/* Векторное произведение */
Vector multiply(const Vector& f_vector, const Vector& s_vector) {
	return(Vector(
			f_vector.getY() * s_vector.getZ() - f_vector.getZ() * s_vector.getY(), 
			f_vector.getZ() * s_vector.getX() - f_vector.getX() * s_vector.getZ(), 
			f_vector.getX() * s_vector.getY() - f_vector.getY() * s_vector.getX()
		)
	);
}

/* Скарярное двух произведение */
double s_multiply(const Vector& f_vector, const Vector& s_vector) {
	return(f_vector.getX() * s_vector.getX() + f_vector.getY() * s_vector.getY() + f_vector.getZ() * s_vector.getZ());
}

/* Получение косинуса между векторами */
double calcCos(const Vector& f_vector, const Vector& s_vector) {
	return(s_multiply(f_vector, s_vector) / (f_vector.calcAbs() * s_vector.calcAbs()));
}

/* Получение синуса между векторами */
double calcSin(const Vector& f_vector, const Vector& s_vector) {
	return(multiply(f_vector, s_vector).calcAbs() / s_vector.calcAbs() / f_vector.calcAbs());
}

/* Получение угла между векторами */
double calcAngle(const Vector& f_vector, const Vector& s_vector) {
	return(atan2(multiply(f_vector, s_vector).calcAbs(), s_multiply(f_vector, s_vector)) * 180 / M_PI);
}
