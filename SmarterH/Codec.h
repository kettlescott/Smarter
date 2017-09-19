/*
 * Codec.h
 *
 *  Created on: 3/07/2017
 *      Author: wangsc
 */

#include "TreeNode.h"
#ifndef CODEC_H_
#define CODEC_H_

char* serialize(struct TreeNode* root) ;

struct TreeNode* deserialize(char* data) ;

char * nomalizeArray(char *orginal);

#endif /* CODEC_H_ */
