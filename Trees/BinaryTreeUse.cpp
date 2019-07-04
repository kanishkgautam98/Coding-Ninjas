//
// Created by Kanishk Gautam on 2019-06-30.
//
#include<bits/stdc++.h>
#include"BinaryTreeNode.h"
using namespace std;

void printTreeFunction(BinaryTreeNode<int>*root) {
    if(root == NULL){
        return;
    }
    cout << root->data << endl;
    if(root->left != NULL) {
        cout << "l" << root->left->data <<endl;
        printTreeFunction(root->left);
    }

    if(root->right != NULL) {
        cout << "r" << root->right->data << endl;
        printTreeFunction(root->right);
    }
}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cout << "Enter Root data"<<endl;
    cin >> rootData;
    if(rootData == -1){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* left = takeInput();
    BinaryTreeNode<int>* right = takeInput();
    root->left = left;
    root->right = right;
    return root;
}

BinaryTreeNode<int>* takeInputLevelWise() {
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;

    if(rootData == -1) {
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    while(!q.empty()) {
        BinaryTreeNode<int>* front = q.front();
        q.pop();
        cout << "Enter left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;

        if(leftChildData != -1) {
            BinaryTreeNode<int>* left = new BinaryTreeNode<int>(leftChildData);
            front->left = left;
        }

        int rightChildData;
        cin >> rightChildData;

        if(rightChildData != -1){
            BinaryTreeNode<int>* right = new BinaryTreeNode<int>(rightChildData);
            front->right = right;
        }
    }

    return root;

}

int main() {

}

