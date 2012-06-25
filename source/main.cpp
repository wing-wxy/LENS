#include <iostream>
#include <stdio.h>
#include "node.h"
#include "tag.h"

using namespace std;

int main(int argc, const char *argv[])
{
	Node* test = new Node( );
	test->setid(10)->setName("aaaaa")->setNumVal("abc",100);
	FILE* fp;
	fp = fopen("testt","wb");
	test -> recordInto(fp);
	fclose(fp);
	delete test;
	FILE* fp2;
	fp = fopen("testt","wb+");
	Node* test2 = new Node( );
	test2->readFrom( fp2 );
	cout	<< test2 -> getid( )	<< endl
			<< test2 -> getName( )	<< endl
			<< test2 -> getNumVal( "abc" )	<< endl;
	return 0;
}
