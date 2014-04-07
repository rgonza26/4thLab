#CSE 220 - Lab 4


#!/bin/bash
# File: Makefile

lister: main.o Print.o Scanner.o Token.o LineNumberNode.o
	g++ main.o Print.o Scanner.o Token.o LineNumberNode.o -o lister

main.o: main.cpp
	g++ -c main.cpp
Print.o: Print.cpp
	g++ -c Print.cpp
Scanner.o: Scanner.cpp
	g++ -c Scanner.cpp
Token.o: Token.cpp
	g++ -c Token.cpp
LineNumberNode.o: LineNumberNode.cpp
	g++ -c LineNumberNode.cpp



