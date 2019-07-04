//
// Created by Kanishk Gautam on 2019-06-30.
//
#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelise() {
    int rootData;
    cout << "Enter root data:" << endl;
    cin >> rootData;

    queue < TreeNode<int>* > q;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    q.push(root);

    while(!q.empty()) {
        TreeNode<int>* front  = q.front();
        q.pop();

        cout << "Enter Number of children of root:" << front->data << endl;
        int numChild;
        cin >> numChild;

        for(int i = 0 ; i < numChild; i++ ) {
            cout << "Enter " << index << "of the current node" << endl;
            int childData;
            cin >> childData;
            TreeNode<int>*child = new TreeNode<int>(childData);
            front->children.push_back(child);
            q.push(child);
        }

    }
    return root;
}


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

void deleteTree(TreeNode <int> * root) {
    for(auto node: root->children){
        deleteTree(node);
    }
    delete root;
}

int main() {
    TreeNode<int>* root = takeInputLevelise();
    printTree(root);
    return 0;
}

