# Computational Fluid Dynamics Project

## Overview
This project focuses on optimizing petrochemical processes by researching permeability characteristics and multiphase flow dynamics using computational fluid dynamics (CFD) analysis.

## Project Structure
- `src/`: Source code files
- `include/`: Header files
- `data/`: Input and output data files
- `README.md`: Project documentation
- `Makefile`: Build instructions

## Build Instructions
To build the project, run:
make

This command will compile the source code and generate the executable file `cfd_analysis`.

## Usage
To execute the CFD analysis, run:
./cfd_analysis

This will start the simulation using the parameters specified in the `data/input_data.txt` file and generate the results in the `data/output_results.txt` file.

### Running with Custom Input Data
To use custom input data, modify the `data/input_data.txt` file with the desired parameters. Ensure the format is consistent with the example provided.

### Example Input Data
An example of the `data/input_data.txt` file:
