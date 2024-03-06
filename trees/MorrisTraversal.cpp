#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

};



    Node* findPredecessor(Node* current){
        if(current==NULL){
            return NULL;
        }

        Node* temp = current;
        if(temp->left){
            temp = temp->left;
        }

        while(temp->right!=NULL && temp->right!=current){
            temp=temp->right;
        }

        return temp;
    }


        void MorrisTraversal(Node* root){


        if(root==NULL){
            return ;
        }

        Node* current = root;

        while(current!=NULL){
           if(current->left==NULL){
            cout<<current->data<<" ";
            current = current -> right;
            }
        else{
            Node* predecessor = findPredecessor(current);

            if(predecessor->right==NULL){
                predecessor->right=current;
                current = current->left;
            }

            else{
                predecessor->right=NULL;
                cout<<current->data<<" ";
                current = current->right;
            }
        }
    }
}


int main(int argc, char const *argv[])
{
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->right = new Node(7);
    root->right = new Node(3);
    root->right->right= new Node(6) ;

    MorrisTraversal(root);
}



