/*
 * =====================================================================================
 *
 *       Filename:  universe.cpp
 *
 *    Description:  The definition of Universe class
 *
 *        Version:  1.0
 *        Created:  2012年06月27日 14时28分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Clyce
 *   Organization:  TBLS
 *
 * =====================================================================================
 */

#include "universe.h"
map<string, Node*> Universe :: nodes;
map<string, Tag*> Universe :: tags;
map<string, Link*> Universe :: links;
map<string, Link*> Universe :: tagLinks;
map<string, Package*> Universe :: packages;

Link* Universe :: getLink( string linkSD ) {
	return links[ linkSD ];
}
Link* Universe :: getTagLink( string tLinkSD ) {
	return tagLinks[ tLinkSD ];
}
void Universe :: addNode( Node* node ) {
	NULL == nodes[ node -> getName( ) ] ? 
		nodes[ node -> getName( ) ] = node :
		throw "node already exist";
}
void Universe :: addTag( Tag* tag ) {
	NULL == tags[ tag -> getName( ) ] ? 
		tags[ tag -> getName( ) ] = tag :
		throw "tag already exist";
}
void Universe :: addLink( Link* link ) {
	NULL == links[ link -> getSD( ) ] ? 
		links[ link -> getSD( ) ] = link :
		throw "link already exist";
}
void Universe :: addTagLink( Link* tlink ) {
	NULL == tagLinks[ tlink -> getSD( ) ] ? 
		tagLinks[ tlink -> getSD( ) ] = tlink :
		throw "link already exist";
}
void Universe :: addPkg( Package* pkg ) {
	NULL == packages[ pkg -> getName( ) ] ? 
		packages[ pkg -> getName( ) ] = pkg :
		throw "pkg already exist";
}

void Universe :: rmNode( string nodeName ) {
	delete nodes[ nodeName ];
	nodes.erase( nodes.find( nodeName ) ); 
	map<string, Package*> :: iterator it; 
	for (it = packages.begin( ); it != packages.end( ); it++) {
		it -> second -> rmNode( nodeName );
	}
}
void Universe :: rmTag( string tagName ) {
	delete tags[ tagName ];
	tags.erase( tags.find( tagName ) ); 
	map<string, Package*> :: iterator it; 
	for (it = packages.begin( ); it != packages.end( ); it++) {
		it -> second -> rmTag( tagName );
	}
}
void Universe :: rmLink( string linkSD ) {
	delete links[ linkSD ];
	links.erase( links.find( linkSD ) ); 
}
void Universe :: rmTagLink( string tLinkSD ) {
	delete tagLinks[ tLinkSD ];
	tagLinks.erase( tagLinks.find( tLinkSD ) ); 
}
void Universe :: rmPkg( string pkgName ) {
	delete packages[ pkgName ];
	packages.erase( packages.find( pkgName ) ); 
}

void Universe :: loadFrom( FILE* file ) {
	//Something...
}
void Universe :: recordInto( FILE* file ) {
	//Something...
}
