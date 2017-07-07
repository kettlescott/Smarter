/*
 * Codec.cpp
 *
 *  Created on: 3/07/2017
 *      Author: wangsc
 */

#include "Codec.h"
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <sstream>
#include <climits>
#include <vector>
#include <queue>
#include <sstream>


Codec::Codec() {
	// TODO Auto-generated constructor stub

}

Codec::~Codec() {
	// TODO Auto-generated destructor stub
}

string Codec:: serialize(TreeNode* root)
 {
	ostringstream out;
	if (root == nullptr) {
		return "null ";
	}
	queue<TreeNode*> q ;
	q.push(root);
	while (!q.empty()) {
      int size = q.size() ;
      for (int i = 0 ; i < size ; ++i) {
          TreeNode* cur = q.front() ;
          q.pop();
          if (cur != nullptr) {
              q.push(cur->left) ;
              q.push(cur->right) ;
          }
          if (cur) {
        	  out << cur->val << ',';
          } else {
              out << "null," ;
          }
      }
	}
	string rst = out.str() ;
	return rst.substr(0, rst.size() - 1) ;
}



TreeNode* Codec:: deserialize(string data) {
	 queue<TreeNode*> q ;
     vector<string> value ;
     std::istringstream  ss(data);
     string v ;
     std::string token;
     while(std::getline(ss, token, ',')) {
    	 cout << token;
         value.push_back(token);
     }
     if (value.size() == 0) return nullptr;
     TreeNode* root = new TreeNode(stoi(value[0]));
     q.push(root);
     for (unsigned int i = 1 ; i < value.size() ; i += 2) {
            TreeNode * cur = q.front(	) ;
            q.pop();
            if (value[i].compare("null") != 0) {
            	 TreeNode* left = new TreeNode(stoi(value[i]));
            	 cur->left = left ;
            	 q.push(left);
            }
            if (i + 1 < value.size() && value[i + 1].compare("null") != 0) {
                TreeNode * right = new TreeNode(stoi(value[i + 1]));
                cur->right = right;
                q.push(right);
            }
     }
     return root ;
 }



