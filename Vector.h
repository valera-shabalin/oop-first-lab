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
	void operator = (const Vector& other);

	/* ���������� */
	~Vector();

	/* ��������� ������� �� ������ */
	void multiplyScalar(double n = 1);

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

#endif

