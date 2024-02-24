#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this-> data = data;
        this-> prev = NULL;
        this-> next = NULL;
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




//! Insertion At Head()
void InsertionAtHead(Node* &head,Node* &tail,int d){
    
    //* if first Node is not initiallised in main,yaha pe ho jayegi #means agar linked list empty hai toh
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}

//! Insertion At tail()
void InsertionAtTail(Node* &tail,Node* &head,int d){
    
    //* if first Node is not initiallised in main,yaha pe ho jayegi #means agar linked list empty hai toh
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }

    else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail=temp;
    }
}


//! Insertion At Any Position()
void InsertionAtPosition(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        InsertionAtHead(head,tail,d);
        return;
    }
    int cnt=1;
    Node* temp = head;
    while(cnt<position-1){
        cnt++;
        temp = temp->next;
    }

    if(temp->next==NULL){
        InsertionAtTail(tail,head,d);
        return;
    }

    Node* newNode1 = new Node(d);

    newNode1->next = temp->next;
    temp->next->prev = newNode1;
    temp->next = newNode1;
    newNode1->prev = temp;
}


//! DELETION OF LINKED LIST()
void deleteNode(Node* &head, Node* &tail, int position){
    if(position==1){
        Node* temp = head;
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;

        delete temp;
    }
    else{
        Node* curr = head;
        Node* prevNode = NULL;
        int cnt = 1;
        while(cnt<position){
            prevNode = curr;
            curr = curr->next;
            cnt++;
        }

        if(curr->next == NULL){
            tail = prevNode;
        }
        curr -> prev = NULL;
        prevNode -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}



//! PRINT
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

//! Length of linked list()
int LenOfLL(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
 return len;
}




int main()
{
    Node* Node1 = new Node(1);
    Node* head = Node1;
    Node* tail = Node1;

    // InsertionAtHead(head,tail,2);
    // InsertionAtHead(head,tail,3);
    // InsertionAtHead(head,tail,4);
    // InsertionAtHead(head,tail,5);


    InsertionAtTail(tail,head,2);
    InsertionAtTail(tail,head,3);
    InsertionAtTail(tail,head,4);
    InsertionAtTail(tail,head,5);

    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;



    InsertionAtPosition(head,tail,1,100);
    print(head);
    InsertionAtPosition(head,tail,7,700);
    print(head);
    InsertionAtPosition(head,tail,3,350);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;


    deleteNode(head,tail,1);
    deleteNode(head,tail,7);
    deleteNode(head,tail,2);

    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    cout<<"Length of Linked list is : "<<LenOfLL(head);

    return 0;
}
