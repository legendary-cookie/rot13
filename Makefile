compile: encode

encode:
	gcc rot13.c -o rot13 -O9
	strip rot13


install:
	install rot13 /usr/bin
