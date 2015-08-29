//
//  ss.cpp
//  Excel Sheet Column Number
//
//  Created by shuye on 15/8/29.
//  Copyright (c) 2015年 shuye. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return root;
        }
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        if(root->left){
            invertTree(root->left);
        }
        if(root->right){
            invertTree(root->right);
        }
        return root;
    }
};
