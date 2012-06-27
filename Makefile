objects = node.o tag.o link.o package.o universe.o main.o 

test: $(objects)
	g++ -o test $(objects)
link.o: source/link.cpp source/link.h
	g++ -c source/link.cpp
node.o: source/node.cpp source/node.h
	g++ -c source/node.cpp
tag.o: source/tag.cpp source/tag.h
	g++ -c source/tag.cpp
package.o: source/package.cpp source/package.h
	g++ -c source/package.cpp
universe.o: source/universe.cpp source/universe.h
	g++ -c source/universe.cpp
main.o: source/main.cpp
	g++ -c source/main.cpp
