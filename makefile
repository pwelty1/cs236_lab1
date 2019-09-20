CXX = g++
FLAGS = -Wall -Werror -g

all:
	g++ -Wall -Werror -std=c++17 -g *.cpp -o lab1
clean:
	rm -f
