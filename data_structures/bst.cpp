#include<iostream>
using namespace std;

class TreeNode {
    public:
        int value;
        TreeNode* left;
        TreeNode* right;

        TreeNode(){
            value = 0;
            left = NULL;
            right = NULL;
        };

        TreeNode(int v){
            value = v;
            left = NULL;
            right = NULL;
        };
};

class BST{
    public: 
        TreeNode* root;

        bool isEmpty(){
            if (root == NULL) return true;
            else return false;
        };
};