.PHONY=install

default: memeater install

memeater: memeater.c
	gcc memeater.c -o memeater

install:
	chmod +x memeater && sudo mv memeater /usr/local/bin
