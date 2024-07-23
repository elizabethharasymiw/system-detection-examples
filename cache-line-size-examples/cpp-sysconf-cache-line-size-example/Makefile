target:
	g++ -std=c++98 -O0 -o main main.cpp

run: target
	./main

optbuild:
	g++ -std=c++98 -O3 -o main main.cpp

optrun: optbuild
	./main

clean:
	rm main
