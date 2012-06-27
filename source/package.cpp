/*
 * =====================================================================================
 *
 *       Filename:  package.cpp
 *
 *    Description:  The definition of package class
 *
 *        Version:  1.0
 *        Created:  2012年06月25日 10时19分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Clyce
 *   Organization:  TBLS
 *
 * =====================================================================================
 */
#include "package.h"
#include <string>

Package* Package :: addNode( Node* node ) {
	NULL == nodes[ node -> getName( ) ] ? 
		nodes[ node -> getName( ) ] = node :
		throw "node already in package";
	return this;
}
Package* Package :: addTag( Tag* tag ) {
	NULL == tags[ tag -> getName( ) ] ? 
		tags[ tag -> getName( ) ] = tag :
		throw "tag already in package";
	return this;
}

Package* Package :: rmNode( string nodeName ) {
	nodes.erase( nodes.find( nodeName ) ); 
	return this;
}
Package* Package :: rmTag( string tagName ) {
	tags.erase( tags.find( tagName ) ); 
	return this;
}

Node* Package :: getNode( string nodeName ) {
	return nodes[ nodeName ];
}

Tag* Package :: getTag( string tagName ) {
	return tags[ tagName ];
}

//Unfinished
vector<Node*>* Package :: getEle(
			vector<string> tagsExp,
			vector<char> comp,
			vector<string> valuesExp 
			) {
}
