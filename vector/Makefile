TARGET = vector.exe 
CXX = g++
CXXFLAGS = -Wall -std=c++17
OBJS = vector.o main.o 


$(TARGET): main.o vector.o 
	g++ -o $(TARGET) main.o vector.o


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)
clean:
	rm -f *.o $(TARGET)