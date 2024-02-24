#include <bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = right = NULL;
    }

};


 
void preorder(node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}



void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}




void inorder(node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


vector<vector<int>> levelorder(node* root){
    vector<vector<int>> ans;
    if(root==NULL){
        return ans;
    }

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i = 0;i<size;i++){
            node* root = q.front();
            q.pop();
            if(root->left!= NULL){
                q.push(root->left);
            }


            if(root->right!=NULL){
                q.push(root->right);
            }

            level.push_back(root->data);
        }
        ans.push_back(level);
    }
return ans;
}


int main()
{
    
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

    cout<<"Preorder :"<<" ";
    preorder(root);

    cout<<endl;

    cout<<"Inorder :"<<" ";
    inorder(root);

    cout<<endl;

    cout<<"Postorder :"<<" ";
    postorder(root);

    cout<<endl;
    cout<<endl;

cout << "Level Order:" << endl;
vector<vector<int>> result = levelorder(root);
for (auto& level : result) {
    for (int val : level) {
        cout << val << " ";
    }
    cout << endl;
}


    return 0;
}
