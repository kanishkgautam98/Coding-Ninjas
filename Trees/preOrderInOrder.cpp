//
// Created by Kanishk Gautam on 2019-07-03.
//
BinaryTreeNode<int>* buildTreeHelper(int *inOrder, int *preOrder, int inOrderStart, int inOrderEnd, int preOrderStart, int preOrderEnd) {
    if(inOrderStart > inOrderEnd) {
        return NULL;
    }

    int rootData = preOrder[preOrderStart];
    int rootIndex = -1;
    for(int i=inOrderStart;i<inOrderEnd;i++){
        if(inOrder[i]==rootData){
            rootIndex = i;
        }
    }


    int lPreS = preOrderStart + 1;

    int lInS = inOrderStart;
    int lInE = rootIndex-1;

    int rPreE = preOrderEnd;
    int rInS = rootIndex + 1;
    int rInE = inOrderEnd;
    int lPreE = lInE-lInS+lPreS;
    int rPreS = lPreE+1;

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left = buildTreeHelper(inOrder, preOrder, lInS, lInE, lPreS, lPreE);
    root->right = buildTreeHelper(inOrder, preOrder, rInS, rInE, rPreS, rPreE);
    return root;

}

int height(BinaryTreeNode<int>* root) {
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left), height(root->right));
}


int Diameter(BinaryTreeNode<int>* root) {
    if(root == NULL){
        return 0;
    }

    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
    return max(max(option1,option2),option3);
}

pair<int,int>heightDiameter(BinaryTreeNode<int>*root){
    if(root == NULL){
        pair<int,int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }

    pair<int,int> leftAns = height(root->left);
    pair<int,int> rightAns = height(root->right);
    int ld = leftAns.second;
    int lh = leftAns.first;
    int rd = rightAns.second;
    int rh = leftAns.first;

    int height = 1 + max(lh,rh);
    int diameter = max(lh+rh,max(ld,rd));
    pair<int,int> ans;
    ans.first = height;
    ans.second = diameter;
    return ans;


}





BinaryTreeNode<int>* buildTree(int * inOrder, int *preOrder, int size) {
    return buildTreeHelpe(inOrder,preOrder,0,size-1,0,size-1);
}

