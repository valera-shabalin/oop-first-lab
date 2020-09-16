#include <iostream>
#include <cmath>

#include "Vector.h"

#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

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
	return(sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2)));
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

/* ����� �������� */
Vector summ(Vector const& f_vector, Vector const& s_vector) {
	return(Vector(f_vector.getX() + s_vector.getX(), f_vector.getY() + s_vector.getY(), f_vector.getZ() + s_vector.getZ()));
}

/* ������� �������� */
Vector diff(Vector const& f_vector, Vector const& s_vector) {
	return(Vector(f_vector.getX() - s_vector.getX(), f_vector.getY() - s_vector.getY(), f_vector.getZ() - s_vector.getZ()));
}

/* ��������� ������������ */
Vector multiply(Vector const& f_vector, Vector const& s_vector) {
	return(Vector(
		f_vector.getY() * s_vector.getZ() - f_vector.getZ() * s_vector.getY(), 
		f_vector.getZ() * s_vector.getX() - f_vector.getX() * s_vector.getZ(), 
		f_vector.getX() * s_vector.getY() - f_vector.getY() * s_vector.getX()
		)
	);
}

/* ��������� ���� ������������ */
double s_multiply(Vector const& f_vector, Vector const& s_vector) {
	return(f_vector.getX() * s_vector.getX() + f_vector.getY() * s_vector.getY() + f_vector.getZ() * s_vector.getZ());
}

/* ��������� �������� ����� ��������� */
double calcCos(Vector const& f_vector, Vector const& s_vector) {
	return(s_multiply(f_vector, s_vector) / (f_vector.calcAbs() * s_vector.calcAbs()));
}

/* ��������� ������ ����� ��������� */
double calcSin(Vector const& f_vector, Vector const& s_vector) {
	return(multiply(f_vector, s_vector).calcAbs() / s_vector.calcAbs() / f_vector.calcAbs());
}

/* ��������� ���� ����� ��������� */
double calcAngle(Vector const& f_vector, Vector const& s_vector) {
	return(atan2(multiply(f_vector, s_vector).calcAbs(), s_multiply(f_vector, s_vector)) * 180 / M_PI);
}
