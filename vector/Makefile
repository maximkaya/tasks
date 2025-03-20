TARGET = main.out 
CXX = g++
CXXFLAGS = -Wall -std=c++17
SRC = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRC))


$(TARGET): main.o vector.o 
	g++ -o $(TARGET) main.o vector.o


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)
clean:
	rm -f *.o $(TARGET)

print:
	echo $(SRC)