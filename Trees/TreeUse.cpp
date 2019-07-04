//
// Created by Kanishk Gautam on 2019-06-23.
//
#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

void printTree (TreeNode<int> * root) {

    if (root == NULL){
        return;
    }

    cout << root->data << ":"<<endl;

    for(auto child : root->children) {
        cout << child->data << " ";
    }

    cout << endl;

    for(auto child : root->children) {
        printTree(child);
    }
}

int main() {
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *root1 = new TreeNode<int>(2);
    TreeNode<int> *root2 = new TreeNode<int>(3);
    root->children.push_back(root1);
    root->children.push_back(root2);
    printTree(root);

}
