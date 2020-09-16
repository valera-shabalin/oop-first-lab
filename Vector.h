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
	void multiplyScalar(const double n);

	/* ������� ������ ������� */
	double calcAbs() const;

	/* ������� ���������� ������� */
	Vector calcOrt() const;

	/* ����� ������� � ������� */
	void print(const bool linebreak = true) const;

	/* ������� */
	double getX() const { return this->x; }
	double getY() const { return this->y; }
	double getZ() const { return this->z; }
	int getID() const { return this->id; }

	/* ������� */
	void setX(double x) { this->x = x; }
	void setY(double y) { this->y = y; }
	void setZ(double z) { this->z = z; }
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

