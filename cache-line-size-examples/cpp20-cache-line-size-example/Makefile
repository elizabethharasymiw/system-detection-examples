target:
	g++ -std=c++20 -O0 -o main main.cpp

run: target
	./main

optbuild:
	g++ -std=c++20 -O3 -o main main.cpp

optrun: optbuild
	./main

clean:
	rm main
