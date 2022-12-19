
out: learning.o add.o
	g++ learning.o add.o -o out

learning.o: learning.cpp
	g++ -c learning.cpp

add.o: add.cpp add.hpp
	g++ -c add.cpp

clean:
	rm *.o out