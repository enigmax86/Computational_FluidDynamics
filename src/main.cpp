#include <iostream>
#include "fluid_dynamics.h"

int main() {
    std::cout << "Starting CFD Analysis..." << std::endl;

    // Initialize parameters
    double permeability = 0.0;
    double porosity = 0.3;  // Example value, adjust as needed

    // Perform analysis
    permeability = calculatePermeability(porosity);

    // Output results
    std::cout << "Calculated Permeability: " << permeability << std::endl;

    // Save results to file
    saveResults("data/output_results.txt", permeability);

    return 0;
}
