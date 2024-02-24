// Binary tree creation
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

node* buildTree(node* root){
    cout<<"Enter the data : ";
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    root = new node(data);

    cout<<"Enter the data to the left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data to the right of "<<data<<endl;
    root->right = buildTree(root->right);


    return root;
}



void levelOrderTraversal(node* root){
    queue<node*> q1;
    q1.push(root);
    q1.push(NULL);

    while(!q1.empty()){
        node* temp = q1.front();
        q1.pop();


        if(temp == NULL){
            cout<<endl;
            if(!q1.empty()){
                q1.push(NULL);
            }
        }

        else{
            cout<<temp->data<<" ";
            
            if(temp->left){
                q1.push(temp->left);
            }

            if(temp->right){
                q1.push(temp->right);
            }
        }
    }
}



void inorder(node* root){
    // Base case
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}



void preorder(node* root){
    // Base case
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}




void postorder(node* root){
    // Base Case;
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}




void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter the data for root : "<<endl;
    int x;
    cin>>x;
    root = new node(x);
    q.push(root);


    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter the data to the left of : "<<temp->data<<" "<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter the data to the right of : "<<temp->data<<" "<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}



int main(){

    node* root = NULL;

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // build level order : 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 

    // root = buildTree(root);

    // cout<<endl;

    // levelOrderTraversal(root);

    // cout<<endl;
    // inorder(root);


    // cout<<endl;
    // preorder(root);

    // cout<<endl;
    // postorder(root);

    buildFromLevelOrder(root);
    levelOrderTraversal(root);

    return 0;
}