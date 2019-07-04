//
// Created by Kanishk Gautam on 2019-06-23.
//

#ifndef CODING_NINJAS_TREENODE_H
#define CODING_NINJAS_TREENODE_H

#endif //CODING_NINJAS_TREENODE_H
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode{
public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) {
        this->data = data;
    }

    ~TreeNode(){
        for(auto node:children){
            delete node;
        }

        delete root;
    }
};
