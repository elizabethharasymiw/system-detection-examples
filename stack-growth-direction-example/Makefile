target:
	gcc -o main main.c

run: target
	./main

nooptbuild:
	gcc -O -o main main.c

nooptrun: nooptbuild
	./main

clean:
	rm main
