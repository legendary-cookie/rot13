rot13: rot13.c
	$(CC) rot13.c -o rot13
	strip rot13

.PHONY: install
install: rot13
	install rot13 /usr/bin

.PHONY: clean
clean:
	rm -f ./rot13
