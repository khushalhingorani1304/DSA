#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;


    node(int data){
        this-> data = data;
        left = right = NULL;
    }

};




int maxDepth(node* root){
    if(root == NULL) return 0;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh,rh);
}







node* buildtree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data for inserting at left"<<" "<<data<<endl ;
    root->left = buildtree(root->left);
    cout<<"Enter the data for inserting at right"<<" "<<data<<endl ;
    root->right = buildtree(root->right);
    return root;
}

int main()
{
    // node* root = NULL;
    // root = buildtree(root);


// *****************************************************************************
    node* root = new node(1);
    root->left = new node(3);
    root->left->left = new node(5);
    root->left->right = new node(7);
    root->left->right->left = new node(8);
    root->left->right->left->left = new node(9);
    root->left->right->right = new node(10);

    root->right = new node(4);
    root->right->right = new node(11);
    root->right->right->left = new node(13);
    root->right->right->right = new node(15);
    root->right->right->right->left = new node(16);
    root->right->right->right->left->left = new node(17);
    root->right->right->right->left->right = new node(18);

// *****************************************************************************

    int ans = maxDepth(root);
    cout<<ans;


    return 0;
}
