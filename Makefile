compile: encode decode

encode:
	gcc rot13encode.c -o rot13encode -O9 -static
	strip rot13encode
decode:
	gcc rot13decode.c -o rot13decode -O9 -static
	strip rot13decode


install:
	install rot13decode /usr/bin
	install rot13encode /usr/bin
