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

	/* ���������� */
	~Vector();

	/* ����� ������� � ������� */
	void print(bool linebreak = true);

	/* ������� ������ ������� */
	double calcAbs();

	/* ������� */
	double getX() { return this->x; }
	double getY() { return this->y; }
	double getZ() { return this->z; }

	/* ������� */
	void setX(double x) { this->x = x; }
	void setY(double y) { this->y = y; }
	void setZ(double z) { this->z = z; }
};

#endif

