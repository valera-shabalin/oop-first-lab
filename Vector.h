#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
	static int static_id;
	int id;
	double x, y, z;

public:
	/* ����������� */
	Vector(double x = 0, double y = 0, double z = 0);

	/* ����������� ����������� */
	Vector(const Vector& other);

	/* ���������� ��������� ������������ */
	const Vector& operator = (const Vector& other);

	/* ���������� */
	~Vector();

	/* ��������� ������� �� ������ */
	Vector& multiplyScalar(const double n);

	/* ������� ������ ������� */
	double calcAbs() const;

	/* ������� ���������� ������� */
	Vector calcOrt() const;

	/* �������� ���������� ������� */
	Vector& toOrt();

	/* ����� ������� � ������� */
	void print(const bool linebreak = true) const;

	/* ������� */
	double getX() const;
	double getY() const;
	double getZ() const;
	int getID() const;

	/* ������� */
	Vector& set(double x, double y, double z);
	Vector& setX(double x);
	Vector& setY(double y);
	Vector& setZ(double z);
};

/* ����� �������� */
Vector summ(const Vector& f_vector, const Vector& s_vector);

/* ������� �������� */
Vector diff(const Vector& f_vector, const Vector& s_vector);

/* ��������� ������������ */
Vector multiply(const Vector& f_vector, const Vector& s_vector);

/* ��������� ���� ������������ */
double s_multiply(const Vector& f_vector, const Vector& s_vector);

/* ��������� �������� ����� ��������� */
double calcCos(const Vector& f_vector, const Vector& s_vector);

/* ��������� ������ ����� ��������� */
double calcSin(const Vector& f_vector, const Vector& s_vector);

/* ��������� ���� ����� ��������� */
double calcAngle(const Vector& f_vector, const Vector& s_vector);

#endif

