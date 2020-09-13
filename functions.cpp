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