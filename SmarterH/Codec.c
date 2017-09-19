/*
 * Codec.c

 *
 *  Created on: 3/07/2017
 *      Author: wangsc
 */
#define _GNU_SOURCE 1
#include "TreeNode.h"
#include "Codec.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct TreeNode*  buildTree(char* data [], int len);
char* concat(const char *s1, const char *s2) ;
struct List_Node {
	struct TreeNode * node ;
	struct List_Node * next ;
    struct List_Node * pre ;
};




struct List_Node * head = NULL ;

struct List_Node * cur = NULL ;

int SIZE = 0 ;






// a queue structure which needs for building a tree

bool offer (struct TreeNode * node) {
	 SIZE++ ;
     if (head == NULL){
       //create a dummy head
       head = (struct List_Node *)malloc (sizeof(struct List_Node));
       cur = head ;
       head->next = NULL;
       head ->pre = NULL;
     }
     //create a element
     struct List_Node * content = (struct List_Node *)malloc (sizeof(struct List_Node));
     content->next = NULL ;
     content->pre = NULL ;
     cur-> next = content ;
     content -> node = node ;
     content -> pre = cur ;
     cur = cur -> next;
	 return 0  ;
}

struct TreeNode * peek (){
    if (head == NULL) return NULL;
	return head-> next -> node ;
}

struct TreeNode * poll(){
	SIZE--;
	struct List_Node* cur_node = head -> next ;
    struct List_Node* next_node = cur_node-> next ;
    if (next_node != NULL) {
      head->next = next_node ;
      next_node->pre = head ;
      cur_node -> next = NULL ;
      cur_node -> pre = NULL;
    } else {
       head->next = NULL;
       cur = head ;
    }
    struct TreeNode * rst = cur_node ->node;
	return rst ;
}

bool isEmpty (){
  return head->next == NULL ;
}


char* concat(const char *s1, const char *s2)
{
    char *result = malloc(strlen(s1)+strlen(s2)+1);//+1 for the zero-terminator
    //in real code you would check for errors in malloc here
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

char * nomalizeArray(char *orginal){
   int s = -1 ;
   int e = -1 ;
   for (int i = 0 ; orginal[i] != '\0' ; ++i) {
          if (s == - 1 && orginal[i] == '['){
        	  s = i ;
          }
          if (e == -1 && orginal[i] == ']'){
        	  e = i ;
          }
          if (s != -1 && e != -1) break;
   }
   char* substr = malloc(strlen(orginal) + 1) ;
   strncpy(substr, orginal + s + 1, e - s - 1);
   substr[e] = '\0';
   return substr ;
}


char* serialize(struct TreeNode* root) {
	 if (root == NULL) {
         return "null";
     }
     head = NULL ;
     SIZE = 0 ;
     offer(root);
     char* all = "" ;
     while (isEmpty() == 0) {
       int num = SIZE ;
       for (int i = 0; i < num ; ++i) {
    	   struct TreeNode* curTreeNode = poll();
    	   if (curTreeNode != NULL) {
    		   offer(curTreeNode->left);
    		   offer(curTreeNode->right) ;
    	   }
    	   if (curTreeNode != NULL) {
    		  char str[15];
    		  sprintf(str, "%d", curTreeNode->val);
    		  all = concat (all, str);
    		  all = concat (all, ",");
    	   } else {
    		   all = concat (all, "null");
    		   all = concat (all, ",");
    	   }
       }
     }
    char *to = (char*) malloc(strlen(all));
    strncpy(to, all, strlen(all) - 1);
	return to ;
}


struct TreeNode* deserialize(char* data) {
	    if (strlen(data) == 0) return NULL ;
	    data = nomalizeArray (data);
		char * data_value[2000];
		char *quote = strdup(data);
		char *pch;
		pch = strtok(quote, ",[]");
		int i = 0;
		while (pch != NULL)
		{
			data_value[i] = pch ;
			pch = strtok(NULL, ",[]");
			i++;
		}
	   if (i == 0) return NULL ;
       return buildTree(data_value, i) ;
}


struct TreeNode*  buildTree(char* data [], int len) {
	   head = NULL ;
	   struct TreeNode* root = (struct TreeNode *)malloc (sizeof(struct TreeNode));
	   if (strcmp("null",data[0]) == 0) return NULL;
	   root->val = (int) strtol(data[0], (char **)NULL, 10);
       root->left = NULL;
       root->right = NULL;
	   offer (root) ;
	   for (int i = 1 ; i < len ; i += 2) {
		   struct TreeNode* cur = poll();
		   if (strcmp("null",data[i]) != 0) {
			   struct TreeNode* left = (struct TreeNode *)malloc (sizeof(struct TreeNode));
               left->left = NULL ;
               left->right = NULL ;
			   left->val = (int) strtol(data[i], (char **)NULL, 10);
			   cur ->left = left;
			   offer (left);
		   }
		   if (i + 1 < len && strcmp("null",data[i + 1]) != 0) {
			   struct TreeNode* right = (struct TreeNode *)malloc (sizeof(struct TreeNode));
               right->left = NULL ;
               right->right = NULL ;
			   right ->val = (int) strtol(data[i + 1], (char **)NULL, 10);
			   cur ->right = right ;
			   offer(right) ;
		   }
	   }
	   return root ;
}

















