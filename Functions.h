#ifndef FUN_H
#define FUN_H

/* Сумма векторов */
Vector summ(Vector const &f_vector, Vector const &s_vector);

/* Разница векторов */
Vector diff(Vector const &f_vector, Vector const &s_vector);

/* Векторное произведение */
Vector multiply(Vector const& f_vector, Vector const& s_vector);

/* Скарярное двух произведение */
double s_multiply(Vector const& f_vector, Vector const& s_vector);

/* Получение косинуса между векторами */
double calcCos(Vector const& f_vector, Vector const& s_vector);

/* Получение синуса между векторами */
double calcSin(Vector const& f_vector, Vector const& s_vector);

/* Получение угла между векторами */
double calcAngle(Vector const& f_vector, Vector const& s_vector);

#endif