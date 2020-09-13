#ifndef FUN_H
#define FUN_H

/* ����� �������� */
Vector summ(Vector const &f_vector, Vector const &s_vector);

/* ������� �������� */
Vector diff(Vector const &f_vector, Vector const &s_vector);

/* ��������� ������������ */
Vector multiply(Vector const& f_vector, Vector const& s_vector);

/* ��������� ���� ������������ */
double s_multiply(Vector const& f_vector, Vector const& s_vector);

/* ��������� �������� ����� ��������� */
double calcCos(Vector const& f_vector, Vector const& s_vector);

/* ��������� ������ ����� ��������� */
double calcSin(Vector const& f_vector, Vector const& s_vector);

/* ��������� ���� ����� ��������� */
double calcAngle(Vector const& f_vector, Vector const& s_vector);

#endif