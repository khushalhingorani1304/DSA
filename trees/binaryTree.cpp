#include <bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        left = right = NULL;
    }
};



node* buildTree(node* root){
    cout<<"Enter the data of Node"<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the Value of Left Node of "<<root->data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the value of right node of "<<root->data<<endl;
    root->right = buildTree(root->right);

    return root;
}



void levelOrderTraversal(node* root){
    queue<node*> que;
    que.push(root);
    que.push(NULL);

    while(!que.empty()){
        node* temp = que.front();
        que.pop();
        cout<<temp->data<<" ";

        if(temp->left){
            que.push(temp->left);
        }

        if(temp->right){
            que.push(temp->right);
        }

        if(que.front() == NULL){
            que.pop();
            que.push(NULL);
            cout<<endl;
        }
    }
}

// testcase -> 2 1 0 -1 -1 4 -1 -1 3 5 -1 -1 6 -1 -1


int main(int argc, char const *argv[])
{

    node* root = NULL;

    root = buildTree(root);


    cout<<endl<<"--------------PRESENTING LEVEL-ORDER TRAVERSAL------------"<<endl;
    levelOrderTraversal(root);


    return 0;
}
