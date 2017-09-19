/*
 * TestMethod.c
 *
 *  Created on: Jul 8, 2017
 *      Author: Scott
 */
#include <stdio.h>
#include "TreeNode.h"
#include "Codec.h"
#include <assert.h>
#include <complex.h>
#include <ctype.h>
#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <inttypes.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdalign.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>
#include <tgmath.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>
int main (int argc, char *argv[]){

//	char *s = "[a,b,c]";
//	char *str = removeChar(s,'[');
//	char *update = removeChar(str,']');
//
////


    char * tree = "[1,2,3,4,5,6,1000]" ;
    struct TreeNode* root = deserialize (tree);
    struct TreeNode* root1 = deserialize ("[null]");

////    preorder(root);
    char* rst = serialize (root);
    printf("%s", rst);
//    printf("%d", root->val);
//    printf("%d", root->left->val);
//    printf("%d", root->right->val);

//	 for (int i = 0 ; i < 100 ; ++i) {
//		 struct TreeNode* a = (struct TreeNode *)malloc (sizeof(struct TreeNode));
//		 a->val = i + 1 ;
//		 offer (a);
//		 printf("%d", poll()->val);
//	 }
//	 printf("%d", isEmpty());
//	 printf("%d", poll()->val);
//	 printf("%d", isEmpty());
//	 while (isEmpty () == 0) {
//		 printf("%d", poll()->val);
//	 }

//	 printf("%d", head -> next == NULL);
//	 printf("%d", head -> next == NULL);
//	 printf("%d", poll()->val);
//	 printf("%d", poll()->val);
////	 printf("%d", !isEmpty());
//
//
//	 while (isEmpty() == 1) {
//		 printf("%d", poll()->val);
//	 }
//	 printf("%d", head ->next->node->val);
//	 printf("%d", head ->next->next->node->val);

////		if (argc < 2) return 0;
////		char * str[2] ;
////		int data[1000];
////		char quote [] = "1,2,2,2,2,2,2,2,1\n9";
////		char *pch;
////        int i = 0 ;
////	    pch = strtok(quote, "\r\n");
////        while (pch != NULL) {
////        	 printf("%s", pch);
////        	 str[i] = *pch ;
////	         pch = strtok(NULL, "\r\n");
////             i++;
////        }
////        i = 0 ;
////	    pch = strtok(quote, ",");
//	  	while (pch != NULL)
//		{
//			int a = atoi(pch);
//			data[i] = a;
//			i++;
//			pch = strtok(NULL, ",");
//		}
////       int size = (int) strtol(argv[1], (char **)NULL, 10);
////       int rst = mostFrequentElement (data, size);
//       printf("%s%s%d%s", "answer:", "[",rst, "]\n");

//	    argv[1] = "1,2,2,2,2,2,2,2,1\n9";
//
//
//	    if (argc < 2) return 0;
//	    char * s = malloc(strlen(argv[1]) + 1);
//	    strcpy(s, argv[1]);
//	    char * str[2] ;
//	    int data [10000] ;
//	    int i = 0 ;
//	    char* pch = NULL;
//
//	    pch = strtok(s, "\r\n");
//
//	    while (pch != NULL)
//	    {
//	    	str[i] = pch ;
//	        pch = strtok(NULL, "\r\n");
//            i++;
//	    }
//	    i = 0 ;
//
//	    pch = strtok(s, ",");
//	    while (pch != NULL)
//	    {
//			int a = atoi(pch);
//	        data[i] = a;
//	    	i++;
//	        pch = strtok(NULL, ",");
//	    }
//	   int size = (int) strtol(str[1], (char **)NULL, 10);
//	   int rst = mostFrequentElement (data,size) ;
//	   printf("%s%s%d%s", "answer:", "[",rst, "]\n");
//       return 0;

//	       if (argc < 2) return 0;
//		    char * s = malloc(strlen(argv[1]) + 1);
//		    printf("%s", s);
//		    strcpy(s, argv[1]);
//		    char * str[2] ;
//		    int data [10000] ;
//		    int i = 0 ;
//		    char* pch = NULL;
//
//		    pch = strtok(s, "\r\n");
//
//		    while (pch != NULL)
//		    {
//		    	str[i] = pch ;
//		        pch = strtok(NULL, "\r\n");
//	            i++;
//		    }
//		    i = 0 ;
//		    pch = strtok(s, ",[]");
//		    while (pch != NULL)
//		    {
//				int a = atoi(pch);
//		        data[i] = a;
//		    	i++;
//		        pch = strtok(NULL, ",");
//		    }
//		   int size = (int) strtol(str[1], (char **)NULL, 10);
//		   printf("%d", i);



	return 1 ;
}


