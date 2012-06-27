/*
 * =====================================================================================
 *
 *       Filename:  universe.h
 *
 *    Description:  The declaration of Universe class
 *
 *        Version:  1.0
 *        Created:  2012年06月27日 14时18分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Clyce
 *   Organization:  TBLS
 *
 * =====================================================================================
 */

#ifndef UNIVERSE_H
#define UNIVERSE_H
#include "tag.h"
#include "link.h"
#include "package.h"
#include <map>

class Universe {
private:
	static map<string, Node*> nodes;
	static map<string, Tag*> tags;
	static map<string, Link*> links;
	static map<string, Link*> tagLinks;
	static map<string, Package*> packages;

public:
	static Link* getLink( string linkSD );
	static Link* getTagLink( string tLinkSD );

	static void addNode( Node* node );
	static void addTag( Tag* tag );
	static void addLink( Link* link );
	static void addTagLink( Link* tlink );
	static void addPkg( Package* pkg );

	static void rmNode( string nodeName );
	static void rmTag( string tagName );
	static void rmLink( string linkSD );
	static void rmTagLink( string tLinkSD );
	static void rmPkg( string pkgName );

	static void loadFrom( FILE* file );
	static void recordInto( FILE* file );
};

#endif
