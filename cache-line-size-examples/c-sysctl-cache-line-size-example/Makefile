target:
	gcc -O0 -o main main.c

run: target
	./main

optbuild:
	gcc -O3 -o main main.c

optrun: optbuild
	./main

clean:
	rm main
