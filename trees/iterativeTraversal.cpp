#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;


    node(int data){
        this->data=data;
        left = right = NULL;
    }

};


vector<int> preorder(node* root){
    vector<int> ans;
    stack<node*> st;

    if(root == NULL){return ans;}
    st.push(root);

    while(!st.empty()){
        node* root = st.top();
        st.pop();
        if(root->right != NULL){st.push(root->right);}
        if(root->left != NULL){st.push(root->left);}

        ans.push_back(root->data);
    }

    return ans;

}




vector<int> inorder(node* root){
    vector<int> ans;
    stack<node*> st;
    node* node = root;
    while(true){
        if(node != NULL){
            st.push(node);
            node = node->left;
        }
        else{
            if(st.empty() == true ){break;}
            node = st.top();
            st.pop();
            ans.push_back(node->data);
            node = node->right;
        }
    }
    return ans;
}


//postorder using 2 stack
vector<int> postorder(node* root){
    stack<node*> st1;
    stack<node*> st2;
    vector<int> ans;

    st1.push(root);

    while(!st1.empty()){
    node* node = st1.top();
    st2.push(node);
    st1.pop();
    if(node->left!=NULL){st1.push(node->left);}
    if(node->right!=NULL){st1.push(node->right);}
    }
    int x = st2.size();
    for(int i = 0;i<x;i++){
        node* n = st2.top();
        ans.push_back(n->data);
        st2.pop();
    }

    return ans;
}




//postorder using 1 stack
vector<int> postorder1(node* root){

    stack<node*> st;
    vector<int> ans;
    node* curr = root;


    while(curr!=NULL || !st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }

        else{
            node* temp = st.top()->right;
            if(temp==NULL){
                temp=st.top();
                st.pop();
                ans.push_back(temp->data);

                while(!st.empty() && temp==st.top()->right){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->data);
                }

            }

            else{
                curr = temp;
                }
            }
        }
return ans;
    }





vector<int> traversal(node* root){

    vector<int> pre,in,post;
    stack<pair<node*,int>> st;

    st.push({root,1});

    if(root==NULL) return in;

    while(!st.empty()){
        auto curr = st.top();
        st.pop();
        if(curr.second == 1){
            pre.push_back(curr.first->data);
            curr.second++;
            st.push(curr);
            if(curr.first->left!=NULL){
                st.push({curr.first->left,1});
            }
        }


        else if(curr.second == 2){
            in.push_back(curr.first->data);
            curr.second++;
            st.push(curr);
            if(curr.first->right!=NULL){
                st.push({curr.first->right,1});
            }
            
        }



        else{
            post.push_back(curr.first->data);
        }


    }

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

    vector<int> ans = preorder(root);
    for(auto i : ans){
        cout<<i<<" ";
    }

cout<<endl;

    vector<int> ans1 = inorder(root);
    for(auto i : ans1){
        cout<<i<<" ";
    }

cout<<endl;

    vector<int> ans2 = postorder(root);
    for(auto i : ans2){
        cout<<i<<" ";
    }

cout<<endl;

    vector<int> ans3 = postorder1(root);
    for(auto i : ans3){
        cout<<i<<" ";
    }




cout<<endl;
cout<<endl;
cout<<endl;

    auto it = traversal(root);
    for(auto i : it){
        cout<<i<<" ";
    }
    
    return 0;
}





