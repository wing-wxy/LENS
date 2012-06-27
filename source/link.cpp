/*
 * =====================================================================================
 *
 *       Filename:  link.cpp
 *
 *    Description:  The definition of link class
 *
 *        Version:  1.0
 *        Created:  2012年06月24日 23时55分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "link.h"

Node* Link :: getStart( Node* start ) { return startNode; }
Link* Link :: setStart( Node* start ) {
	startNode = start;
	return this;
}

Node* Link :: getTarget( Node* target ) {
	if ( TAG == linkType ) 
	  throw "can not connect a tag link to a node";
	return targetNode;
}
Link* Link :: setTarget( Node* target ) {
	if ( TAG == linkType ) 
	  throw "can not connect a tag link to a node";
	targetNode = target;
	return this;
}

Tag* Link :: getTarget( Tag* target ) {
	if ( NODE == linkType ) 
	  throw "can not connect a node link to a tag";
	return targetTag;
}
Link* Link :: setTarget( Tag* target ) {
	if ( NODE == linkType ) {
		throw "can not connect a node link to a tag";
		target = targetTag;
		return this;
	}
}

Link* Link :: setType( int type ) {
	linkType = type;
	return this;
}

string Link :: getSD( ) {
	return ( linkType == 0 ? 
				(
				 "N|" +
				 startNode	->	getName( ) +
				 targetNode -> getName( ) 
				) 
				: 
				(
				 "T|" +
				 startNode -> getName( ) +
				 targetTag -> getName( )
				)
		   );
}
