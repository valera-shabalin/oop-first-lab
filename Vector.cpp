#include <iostream>
#include <cmath>

#include "Vector.h"

using namespace std;

/* ����������� */
Vector::Vector(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
	cout << "�������� ����������� - " << this << endl;
}

/* ����������� ����������� */
Vector::Vector(const Vector &other) {
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
	cout << "�������� ����������� ����������� - " << this << endl;
}

/* ���������� ��������� ������������ */
void Vector::operator = (const Vector& other) {
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}

/* ���������� */
Vector::~Vector() {
	cout << "�������� ���������� - " << this << endl;
}

/* ��������� ������� �� ������ */
void Vector::multiplyScalar(double n) {
	this->x *= n;
	this->y *= n;
	this->z *= n;
}

/* ������� ������ ������� */
double Vector::calcAbs() const {
	return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}

/* ������� ���������� ������� */
Vector Vector::calcOrt() const {
	double abs = this->calcAbs();
	return(Vector(this->x / abs, this->y / abs, this->z / abs));
}

/* ����� ������� � ������� */
void Vector::print(bool linebreak) const {
	cout << "[" << x << "," << y << "," << z << "]";
	if (linebreak) cout << endl;
}
