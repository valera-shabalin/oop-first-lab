#include "Vector.h"

using namespace std;

/* Сумма векторов */
Vector summ(Vector const& f_vector, Vector const& s_vector) { 
	return(Vector(f_vector.getX() + s_vector.getX(), f_vector.getY() + s_vector.getY(), f_vector.getZ() + s_vector.getZ())); 
}

/* Разница векторов */
Vector diff(Vector const& f_vector, Vector const& s_vector) { 
	return(Vector(f_vector.getX() - s_vector.getX(), f_vector.getY() - s_vector.getY(), f_vector.getZ() - s_vector.getZ())); 
}

/* Векторное произведение */
Vector multiply(Vector const& f_vector, Vector const& s_vector) {
	return(Vector(f_vector.getY() * s_vector.getZ() - f_vector.getZ() * s_vector.getY(), f_vector.getZ() * s_vector.getX() - f_vector.getX() * s_vector.getZ(), f_vector.getX() * s_vector.getY() - f_vector.getY() * s_vector.getX()));
}

/* Скарярное двух произведение */
double s_multiply(Vector const& f_vector, Vector const& s_vector) {
	return(f_vector.getX() * s_vector.getX() + f_vector.getY() * s_vector.getY() + f_vector.getZ() * s_vector.getZ());
}