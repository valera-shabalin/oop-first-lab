#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

#include "Vector.h"

using namespace std;

int Vector::static_id = 1;

/* ����������� */
Vector::Vector(double x, double y, double z) {
	this->set(x, y, z);
	this->id = static_id++;
	cout << "�������� �����������, id - " << this->id << endl;
}

/* ����������� ����������� */
Vector::Vector(const Vector &other) {
	this->set(other.x, other.y, other.z);
	this->id = static_id++;
	cout << "�������� ����������� �����������, id - " << this->id << endl;
}

/* ���������� ��������� ������������ */
const Vector& Vector::operator = (const Vector& other) {
	if (this == &other) return *this;
	this->set(other.x, other.y, other.z);
	return *this;
}

/* ���������� */
Vector::~Vector() {
	cout << "�������� ����������, id - " << this->id << endl;
}

/* ��������� ������� �� ������ */
Vector& Vector::multiplyScalar(const double n) {
	this->x *= n; 
	this->y *= n; 
	this->z *= n;
	return *this;
}

/* ������� ������ ������� */
double Vector::calcAbs() const {
	return(sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2)));
}

/* ������� ���������� ������� */
Vector Vector::calcOrt() const {
	double abs = this->calcAbs();
	return(Vector(this->x / abs, this->y / abs, this->z / abs));
}

/* ����� ������� � ������� */
void Vector::print(const bool linebreak) const {
	cout << "[" << x << "," << y << "," << z << "]";
	if (linebreak) cout << endl;
}

/* ����� �������� */
Vector summ(const Vector& f_vector, const Vector& s_vector) {
	return(Vector(
			f_vector.getX() + s_vector.getX(), 
			f_vector.getY() + s_vector.getY(), 
			f_vector.getZ() + s_vector.getZ()	
		)
	);
}

/* ������� �������� */
Vector diff(const Vector& f_vector, const Vector& s_vector) {
	return(Vector(
			f_vector.getX() - s_vector.getX(), 
			f_vector.getY() - s_vector.getY(), 
			f_vector.getZ() - s_vector.getZ()
		)
	);
}

/* ��������� ������������ */
Vector multiply(const Vector& f_vector, const Vector& s_vector) {
	return(Vector(
			f_vector.getY() * s_vector.getZ() - f_vector.getZ() * s_vector.getY(), 
			f_vector.getZ() * s_vector.getX() - f_vector.getX() * s_vector.getZ(), 
			f_vector.getX() * s_vector.getY() - f_vector.getY() * s_vector.getX()
		)
	);
}

/* ��������� ���� ������������ */
double s_multiply(const Vector& f_vector, const Vector& s_vector) {
	return(f_vector.getX() * s_vector.getX() + f_vector.getY() * s_vector.getY() + f_vector.getZ() * s_vector.getZ());
}

/* ��������� �������� ����� ��������� */
double calcCos(const Vector& f_vector, const Vector& s_vector) {
	return(s_multiply(f_vector, s_vector) / (f_vector.calcAbs() * s_vector.calcAbs()));
}

/* ��������� ������ ����� ��������� */
double calcSin(const Vector& f_vector, const Vector& s_vector) {
	return(multiply(f_vector, s_vector).calcAbs() / s_vector.calcAbs() / f_vector.calcAbs());
}

/* ��������� ���� ����� ��������� */
double calcAngle(const Vector& f_vector, const Vector& s_vector) {
	return(atan2(multiply(f_vector, s_vector).calcAbs(), s_multiply(f_vector, s_vector)) * 180 / M_PI);
}
