#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"The memory of node "<<val<<" is deleted succesfully!"<<endl;
    }

};

//! NEW NODE
void InsertNode(Node* &tail,int element,int d){
    // assuming LL is empty
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    // assuming LL empty nhi hai
    else{
        Node* curr = tail;

        while(curr->data != element){
            curr=curr->next;
        }
        Node* NodeToInsert = new Node(d);
        NodeToInsert->next = curr->next;
        curr->next = NodeToInsert;
    }
}

//! DELETE NODE
void deleteNode(Node* &tail,int value){
    
    if(tail == NULL){
        cout<<"EMPTY LINKED LIST HAI BHAISHAHAB";
    }
    
    else{ 
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        //* agar sirf ek node hai means prev == current == tail hai!
        if(prev == curr){
            tail = NULL;  //*ye nhi toh segmentation fault aata hai 
        } 

        // * ye case hai ki 1 se jyada node hai par tail current ko point kar raha hai toh current and tail dono delete ho jayengeT
        else if(tail == curr){
            tail = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }   
}

//! print()

void print(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"Empty Linked List print nhi hoga";
    }

    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != tail);

    cout<<endl;
}

int main()
{

// NUll Node;

    Node* tail = NULL;


    InsertNode(tail,5,3);
    print(tail);

    InsertNode(tail,3,5);
    InsertNode(tail,5,7);
    InsertNode(tail,5,6);

    print(tail);

    deleteNode(tail,3);
    print(tail);

    return 0;
}
