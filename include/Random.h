#ifndef PW_2_GEOMETRY_RANDOM_H
#define PW_2_GEOMETRY_RANDOM_H

#include <iostream>
#include <vector>
#include <fstream>

class RandomSpectre {
public:
    const double Pi = 3.141592653589793;

    double E;

    RandomSpectre (double E);
    ~RandomSpectre() = default;

    double pdf (double E);
    double Rand (double fMin, double fMax);
    void print (std::vector <double> A);
    double Mean(std::vector <double> A);
    double Variance(std::vector <double> A);
    std::vector <double> RandomVariate(double a, double b, double h, int N);
};

#endif //PW_2_GEOMETRY_RANDOM_H
