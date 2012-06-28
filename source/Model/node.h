/*
 * =====================================================================================
 *
 *       Filename:  node.h
 *
 *    Description:  The declaration of node class
 *
 *        Version:  1.0
 *        Created:  2012年06月19日 19时57分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Clyce
 *   Organization:	TBLS
 *
 * =====================================================================================
 */

#ifndef NODE_H
#define NODE_H
#define STRING 0
#define NUMBER 1
#define FLOAT 2

#include <string>
#include <map>

using namespace std;

class Node {
protected:
	static long			nodeCount;
	long				id;
	string				name;
	map<string,string>	valStr;
	map<string,long>	valNum;
	map<string,double>	valFlt;
	map<string,short>	interface;	//0 - string 1 - num 2 - float

public:

	Node( ) { ++nodeCount; } 

	long countNodes( ) { return nodeCount; }

	long getid( );
	Node* setid( long input_id );

	string getName( );
	Node* setName( string input_name );

	string getStrVal( string keyName );
	Node* setStrVal( string keyName, string value );
	long getNumVal( string keyName );
	Node* setNumVal( string keyName, long value );
	double getFltVal( string keyName );
	Node* setFltVal( string keyName, double value );

	short getInterface( string keyName );
	Node* setInterface( string keyName, short powType );


};

#endif
