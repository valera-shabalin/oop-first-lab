#include <iostream>
#include <cmath>

#include "Vector.h"

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

/* Деструктор */
Vector::~Vector() {
	cout << "Вызвался деструктор - " << this << endl;
}

/* Вывод вектора в консоль */
void Vector::print(bool linebreak) {
	cout << "[" << x << "," << y << "," << z << "]";
	if (linebreak) cout << endl;
}

/* Умножение вектора на скаляр */
void Vector::multiplyScalar(double n) {
	this->x *= n;
	this->y *= n;
	this->z *= n;
}

/* Подсчёт модуля вектора */
double Vector::calcAbs() {
	return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}