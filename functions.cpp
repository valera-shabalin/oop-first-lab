#include <iostream>
#include <cmath>

#include "Vector.h"

using namespace std;

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
	return(Vector(f_vector.getY() * s_vector.getZ() - f_vector.getZ() * s_vector.getY(), f_vector.getZ() * s_vector.getX() - f_vector.getX() * s_vector.getZ(), f_vector.getX() * s_vector.getY() - f_vector.getY() * s_vector.getX()));
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
	return(1 - pow(calcCos(f_vector, s_vector), 2));
}