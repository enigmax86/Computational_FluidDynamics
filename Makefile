CXX = g++
CXXFLAGS = -Iinclude

SRC = src/main.cpp src/fluid_dynamics.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = cfd_analysis

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
