objects = node.o tag.o link.o package.o universe.o modeltest.o 

test: $(objects)
	g++ -o ModelTest $(objects)
link.o: source/Model/link.cpp source/Model/link.h
	g++ -c source/Model/link.cpp
node.o: source/Model/node.cpp source/Model/node.h
	g++ -c source/Model/node.cpp
tag.o: source/Model/tag.cpp source/Model/tag.h
	g++ -c source/Model/tag.cpp
package.o: source/Model/package.cpp source/Model/package.h
	g++ -c source/Model/package.cpp
universe.o: source/Model/universe.cpp source/Model/universe.h
	g++ -c source/Model/universe.cpp
modeltest.o: source/test.cpp
	g++ -c source/Model/modeltest.cpp
