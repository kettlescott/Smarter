/*
 * Codec.h
 *
 *  Created on: 3/07/2017
 *      Author: wangsc
 */
#include "TreeNode.h"
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#ifndef CODEC_H_
#define CODEC_H_

class Codec {
public:
	Codec();
	virtual ~Codec();
	string serialize(TreeNode* root);
	void serialize(TreeNode* root, ostringstream& out );
	TreeNode* deserialize(const string& s, int lower, int upper, int & pos );
	TreeNode* deserialize(string data);
};


#endif /* CODEC_H_ */
