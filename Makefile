default:
	g++ -std=c++17 -o main main.cpp

run:
	g++ -std=c++17 -o main main.cpp
	./main

clean:
	rm main