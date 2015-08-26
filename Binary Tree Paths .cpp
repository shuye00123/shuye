//
//  main.cpp
//  Excel Sheet Column Number
//
//  Created by shuye on 15/8/24.
//  Copyright (c) 2015年 shuye. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

 //Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        Recursion(root ,"",result);
        return result;
    }
    
    void Recursion(TreeNode* root, string item, vector<string>& result){
        if (root ==NULL) {
            return ;
        }
        item = to_string(root->val);
        if (root->left!=NULL) {
            Recursion(root->left, item=item+"->", result);
        }
        if (root->right!=NULL) {
            Recursion(root->right, item=item+"->", result);
        }
        if (root->right==NULL&&root->left==NULL) {
            result.push_back(item);
        }
    }
};

