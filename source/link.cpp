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

Node* Link :: getStart( Node* start ) { return linkStart; }
Link* Link :: setStart( Node* start ) {
	linkStart = start;
	return this;
}

Node* Link :: getTarget( Node* target ) {
	if ( TAG == linkType ) {
		throw new Exception("can not connect a tag link to a node");
	} else {
		return targetNode;
	}
}
Link* Link :: setTarget( Node* target ) {
	if ( TAG == linkType ) {
		throw new Exception("can not connect a tag link to a node");
	} else {
		targetNode = target;
		return this;
	}
}

Tag* Link :: getTarget( Tag* target ) {
	if ( NODE == linkType ) {
		throw new Exception("can not connect a node link to a tag");
	} else {
		return targetTag;
	}
}
Link* Link :: setTarget( Tag* target ) {
	if ( NODE == linkType ) {
		throw new Exception("can not connect a node link to a tag");
	} else {
		target = targetTag;
		return this;
	}
}

Node* Link :: setType( int type) {
	linkType = type;
	return this;
}
