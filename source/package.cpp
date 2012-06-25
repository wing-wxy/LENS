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
	long pos;
	for (pos = 0; pos < nodes.size( ); pos++) {
		if ( ( nodes.at( pos ) -> name ) == ( node -> name ) ) {
			throw new Exception( "Node already exists" );
		}
	}
	nodes.push_back( node );
	return this;
}
Package* Package :: addTag( Tag* tag ) {
	long pos;
	for (pos = 0; pos < tags.size( ); pos++) {
		if ( ( tags.at( pos ) -> name ) == ( tag -> name ) ) {
			throw new Exception( "Node already exists" );
		}
	}
	tags.push_back( tag );
	return this;
}

Package* Package :: rmNode( string nodeName ) {
	long pos;
	for (pos = 0; pos < nodes.size( ); pos++) {
		if ( ( nodes.at( pos ) -> name ) == nodeName )
		  nodes.erase( pos );
	}
	return this;
}
Package* Package :: rmTag( string tagName ) {
	long pos;
	for (pos = 0; pos < tags.size( ); pos++) {
		if ( ( tags.at( pos ) -> name ) == tagName )
		  tags.erase( pos );
	}
	return this;
}

Node* Package :: getNode( string nodeName ) {
	long pos;
	for (pos = 0; pos < nodes.size( ); pos++) {
		if ( ( nodes.at( pos ) -> getName( ) ) == nodeName ) {
			return nodes.at( pos );
		}
	}
	return NULL;
}

Node* Package :: getTag( string tagName ) {
	long pos;
	for (pos = 0; pos < tags.size( ); pos++) {
		if ( ( tags.at( pos ) -> getName( ) ) == tagName ) {
			return tags.at( pos );
		}
	}
	return NULL;
}

//Unfinished
vector<Node*>* Package :: getEle(
			vector<string> tagsExp,
			vector<char> comp,
			vector<string> valuesExp 
			) {
	int posT;
	long posN;
	for (posN = 0; posN < nodes.size( ); posN++) {
		for (posT = 0; posT < tagsExp.size( ); posT++) {
			if ( NULL == tagsExp.at( pos ) )
			  throw new Exception("Tag not belong to selected package");
		}
	}
}
