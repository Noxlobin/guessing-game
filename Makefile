all: build

build:
	g++ -o Guesser guesser.cpp 

clean:
	rm ./Guesser