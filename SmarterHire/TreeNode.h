/*
 * TreeNode.h
 *
 *  Created on: 3/07/2017
 *      Author: wangsc
 */
#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

#ifndef TREENODE_H_
#define TREENODE_H_

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#endif /* TREENODE_H_ */
