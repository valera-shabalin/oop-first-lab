#include <iostream>
#include <cmath>

#include "Vector.h"

#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

using namespace std;

/* Конструктор */
Vector::Vector(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
	cout << "Вызвался конструктор - " << this << endl;
}

/* Конструктор копирования */
Vector::Vector(const Vector &other) {
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
	cout << "Вызвался конструктор копирования - " << this << endl;
}

/* Перегрузка оператора присваивания */
void Vector::operator = (const Vector& other) {
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}

/* Деструктор */
Vector::~Vector() {
	cout << "Вызвался деструктор - " << this << endl;
}

/* Умножение вектора на скаляр */
void Vector::multiplyScalar(double n) {
	this->x *= n;
	this->y *= n;
	this->z *= n;
}

/* Подсчёт модуля вектора */
double Vector::calcAbs() const {
	return(sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2)));
}

/* Подсчёт единичного вектора */
Vector Vector::calcOrt() const {
	double abs = this->calcAbs();
	return(Vector(this->x / abs, this->y / abs, this->z / abs));
}

/* Вывод вектора в консоль */
void Vector::print(bool linebreak) const {
	cout << "[" << x << "," << y << "," << z << "]";
	if (linebreak) cout << endl;
}

/* Сумма векторов */
Vector summ(Vector const& f_vector, Vector const& s_vector) {
	return(Vector(f_vector.getX() + s_vector.getX(), f_vector.getY() + s_vector.getY(), f_vector.getZ() + s_vector.getZ()));
}

/* Разница векторов */
Vector diff(Vector const& f_vector, Vector const& s_vector) {
	return(Vector(f_vector.getX() - s_vector.getX(), f_vector.getY() - s_vector.getY(), f_vector.getZ() - s_vector.getZ()));
}

/* Векторное произведение */
Vector multiply(Vector const& f_vector, Vector const& s_vector) {
	return(Vector(
		f_vector.getY() * s_vector.getZ() - f_vector.getZ() * s_vector.getY(), 
		f_vector.getZ() * s_vector.getX() - f_vector.getX() * s_vector.getZ(), 
		f_vector.getX() * s_vector.getY() - f_vector.getY() * s_vector.getX()
		)
	);
}

/* Скарярное двух произведение */
double s_multiply(Vector const& f_vector, Vector const& s_vector) {
	return(f_vector.getX() * s_vector.getX() + f_vector.getY() * s_vector.getY() + f_vector.getZ() * s_vector.getZ());
}

/* Получение косинуса между векторами */
double calcCos(Vector const& f_vector, Vector const& s_vector) {
	return(s_multiply(f_vector, s_vector) / (f_vector.calcAbs() * s_vector.calcAbs()));
}

/* Получение синуса между векторами */
double calcSin(Vector const& f_vector, Vector const& s_vector) {
	return(multiply(f_vector, s_vector).calcAbs() / s_vector.calcAbs() / f_vector.calcAbs());
}

/* Получение угла между векторами */
double calcAngle(Vector const& f_vector, Vector const& s_vector) {
	return(atan2(multiply(f_vector, s_vector).calcAbs(), s_multiply(f_vector, s_vector)) * 180 / M_PI);
}
