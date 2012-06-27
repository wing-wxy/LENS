/*
 * =====================================================================================
 *
 *       Filename:  link.h
 *
 *    Description:  The declaration of link class
 *
 *        Version:  1.0
 *        Created:  2012年06月24日 23时46分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Clyce
 *   Organization:  TBLS
 *
 * =====================================================================================
 */

#ifndef LINK_H
#define LINK_H
#include "tag.h"
#define TAG 1
#define NODE 0
class Link : public Node {
protected:
   	static long	linkCount;
	Node*		startNode;
	Node*		targetNode;
	Tag*		targetTag;
	short		linkType;	//0 - node-node, 1 - node-tag
public:
	Link( ) {
		++linkCount;
	}

	long countLink( ) { return linkCount; }

	Link* setType( int type );

	Node* getStart( Node* start );
	Link* setStart( Node* start );
	Node* getTarget( Node* target );
	Link* setTarget( Node* target );
	Tag* getTarget( Tag* target );
	Link* setTarget( Tag* target );

	string getSD( ); 
};
#endif
