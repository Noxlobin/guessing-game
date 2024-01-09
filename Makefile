cxxc = g++

all: build

build:
	$(cxxc) -o Guesser guesser.cpp 

clean:
	rm ./Guesser