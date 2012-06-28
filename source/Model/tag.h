/*
 * =====================================================================================
 *
 *       Filename:  tag.h
 *
 *    Description:  The declaration of tag class
 *
 *        Version:  1.0
 *        Created:  2012年06月20日 03时24分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Clyce
 *   Organization:  TBLS
 *
 * =====================================================================================
 */

#ifndef TAG_H
#define TAG_H
#include "node.h"
class Tag : public Node {
protected:
   	static long tagCount;
public:
	Tag( ) {
		++tagCount;
	}
	long countTags( ) {
		return tagCount;
	}
};
#endif
