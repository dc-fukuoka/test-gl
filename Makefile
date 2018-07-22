ALL:
	gcc -g test.c -lglut -lGL

clean:
	rm -f a.out *~
