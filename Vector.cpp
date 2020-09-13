#include <iostream>
#include <math.h>
#include "Vector.h"

using namespace std;

/* ����������� */
Vector::Vector(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
	cout << "�������� ����������� - " << this << endl;
}

/* ���������� */
Vector::~Vector() {
	cout << "�������� ���������� - " << this << endl;
}

/* ����� ������� � ������� */
void Vector::print(bool linebreak) {
	cout << "[" << x << "," << y << "," << z << "]";
	if (linebreak) cout << endl;
}

/* ������� ������ ������� */
double Vector::calcAbs() {
	return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}