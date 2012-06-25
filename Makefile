objects = node.o tag.o main.o link.o

test: $(objects)
	g++ -o test $(objects)
link.o: source/link.cpp source/link.h
	g++ -c link.cpp
node.o: source/node.cpp source/node.h
	g++ -c node.cpp
tag.o: source/tag.cpp source/tag.h
	g++ -c tag.cpp
main.o: source/main.cpp
	g++ -c main.cpp
