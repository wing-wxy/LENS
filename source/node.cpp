/*
 * =====================================================================================
 *
 *       Filename:  node.cpp
 *
 *    Description:  The definition of node class
 *
 *        Version:  1.0
 *        Created:  2012年06月20日 01时17分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Clyce
 *   Organization:  TBLS
 *
 * =====================================================================================
 */

#include "node.h"
#include <stdio.h>
using namespace std;

long Node :: nodeCount;

long Node :: getid( ) { return id; }
Node* Node :: setid( long input_id ) {
	id = input_id;
	return this;
}

string Node :: getName( ) { return name; }
Node* Node :: setName( string input_name ) {
	name = input_name;
	return this;
}

short Node :: getInterface( string keyName ) { return interface[ keyName ]; }
Node* Node :: setInterface( string keyName, short powType ) {
	interface[ keyName ] = powType;
	return this;
}

string Node :: getStrVal( string keyName ) { return valStr[ keyName ]; }
Node* Node :: setStrVal( string keyName, string value ) {
	valStr[ keyName ] = value;
	return this;
}

long Node :: getNumVal( string keyName ) { return valNum[ keyName ]; }
Node* Node :: setNumVal( string keyName, long value ) {
	valNum[ keyName ] = value;
	return this;
}

double Node :: getFltVal( string keyName ) { return valFlt[ keyName ]; }
Node* Node :: setFltVal( string keyName, double value ) {
	valFlt[ keyName ] = value;
	return this;
}
