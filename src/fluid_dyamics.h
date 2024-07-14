#ifndef FLUID_DYNAMICS_H
#define FLUID_DYNAMICS_H

#include <string>

double calculatePermeability(double porosity);
void saveResults(const std::string& filename, double permeability);

#endif // FLUID_DYNAMICS_H
