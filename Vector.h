#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
	double x, y, z;

public:
	/* ����������� */
	Vector(double x = 0, double y = 0, double z = 0);

	/* ���������� */
	~Vector();

	/* ����� ������� � ������� */
	void print(bool linebreak = true);

	/* ������� ������ ������� */
	double calcAbs();
};

#endif

