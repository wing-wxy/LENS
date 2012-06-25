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
#include "node.h"
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

	Node* getStart( Node* start );
	Link* setStart( Node* start );
	Node* getTarget( Node* target );
	Link* setTarget( Node* target );
};
#endif
