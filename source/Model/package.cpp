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
#include "link.h"
#include <string>
#include "universe.h"

Package* Package :: addNode( Node* node ) {
	if ( NULL != nodes[ node -> getName( ) ] ) {
		throw "node already in package";
	} else {
		nodes[ node -> getName( ) ] = node;
		map<string, Tag*> :: iterator it;
		Link* tagLink;
		for (it = tags.begin( ); it != tags.end( ); it++) {
			Link* tagLink = new Link( );
			tagLink -> setType( TAG );
			tagLink -> setStart( node );
			tagLink -> setTarget( it -> second );
			Universe :: addTagLink( tagLink );
		}
	}
	return this;
}
Package* Package :: addTag( Tag* tag ) {
	if ( NULL != tags[ tag -> getName( ) ] ) {
		throw "node already in package";
	} else {
		tags[ tag -> getName( ) ] = tag;
		map<string, Node*> :: iterator it;
		Link* tagLink;
		for (it = nodes.begin( ); it != nodes.end( ); it++) {
			Link* tagLink = new Link( );
			tagLink -> setType( TAG );
			tagLink -> setStart( it -> second );
			tagLink -> setTarget( tag );
			Universe :: addTagLink( tagLink );
		}
	}
	return this;
}

Package* Package :: addNode( Node* node, short unpack ) {
	NULL != nodes[ node -> getName( ) ] ?
		throw "node already in package" :
		nodes[ node -> getName( ) ] = node;
	return this;
}
Package* Package :: addTag( Tag* tag, short unpack ) {
	NULL != tags[ tag -> getName( ) ] ?
		throw "node already in package" :
		tags[ tag -> getName( ) ] = tag;
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
