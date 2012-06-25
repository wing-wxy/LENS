/*
 * =====================================================================================
 *
 *       Filename:  package.h
 *
 *    Description:  The declaration of package class
 *
 *        Version:  1.0
 *        Created:  2012年06月25日 10时19分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Clyce
 *   Organization:  TBLS
 *
 * =====================================================================================
 */

#ifndef PACKAGE_H
#define PACKAGE_H
#include "node.h"
#include <deque>
class Package : public Node {
protected:
	deque<Node*> nodes;
	deque<Tag*> tags;
public:
	Package* addNode( Node* node );
	Package* addTag( Tag* tag );

	Package* rmNode( string nodeName );
	Package* rmTag( string tagName );

	Node*	getNode( string nodeName );
	Tag*	getTag( string tagName );

	vector<Node*>* getEle(
				vector<string> tagsExp,
				vector<char> comp,
				vector<string> valuesExp 
				);
};
#endif
