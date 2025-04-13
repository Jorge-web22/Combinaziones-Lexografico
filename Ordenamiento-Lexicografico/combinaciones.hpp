#ifndef COMBINACIONES_HPP_INCLUDED
#define COMBINACIONES_HPP_INCLUDED

#pragma once

#include <ostream>
#include <vector>

// Calcula el coeficiente binomial C(n, r) de forma segura
unsigned long long binomial_coefficient(int n, int r);

// Genera todas las r-combinaciones de {1..n} en orden lexicogr�fico, las escribe en 'os' (una l�nea por combinaci�n, elementos separados por coma)
// Devuelve el n�mero de combinaciones generadas
unsigned long long generate_combinations_csv(int n, int r, std::ostream& os);

#endif // COMBINACIONES_HPP_INCLUDED
