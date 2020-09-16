#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
	double x, y, z;

public:
	/* ����������� */
	Vector(double x = 0, double y = 0, double z = 0);

	/* ����������� ����������� */
	Vector(const Vector& other);

	/* ���������� ��������� ������������ */
	Vector operator = (const Vector& other);

	/* ���������� */
	~Vector();

	/* ��������� ������� �� ������ */
	void multiplyScalar(double n);

	/* ������� ������ ������� */
	double calcAbs() const;

	/* ������� ���������� ������� */
	Vector calcOrt() const;

	/* ����� ������� � ������� */
	void print(bool linebreak = true) const;

	/* ������� */
	double getX() const { return this->x; }
	double getY() const { return this->y; }
	double getZ() const { return this->z; }

	/* ������� */
	void setX(double x) { this->x = x; }
	void setY(double y) { this->y = y; }
	void setZ(double z) { this->z = z; }
};

/* ����� �������� */
Vector summ(Vector const& f_vector, Vector const& s_vector);

/* ������� �������� */
Vector diff(Vector const& f_vector, Vector const& s_vector);

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

