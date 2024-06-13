target:
	gcc -O3 -o main main.c

run: target
	./main

nooptbuild:
	gcc -O0 -o main main.c

nooptrun: nooptbuild
	./main

clean:
	rm main
