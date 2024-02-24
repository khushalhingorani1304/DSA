// using namespace std;
// #include <bits/stdc++.h>

// class Node{
//     public:
//     int data;
//     Node* next;

//     //!Constructor
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

//     //!DESTRUCTOR
//     ~Node(){
//         int val = this->data;

//         if(this->next != NULL){
//             // memory  free
//             delete next;
//             this->next=NULL;
//         }
//         cout<<val<<" - Memory free for this node"<<endl;
//     }




// };

// void insertionAtHead(Node* &head,int d){
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;
// }



// void insertionAtTail(Node* &tail,int d){
//     Node* temp = new Node(d);
//     tail->next=temp;
//     tail = temp;
// }



// void insertATposition(Node* &head,Node* &tail,int position,int d){

//     Node* temp = head;
//     int i = 1;

//     if(position==1){
//         insertionAtHead(head,d);
//         return;
//     }



//     while(i<position-1){
//         temp = temp->next;
//         i++;
//     }

//     if(temp->next==NULL){
//         insertionAtTail(tail,d);
//         return;
//     }

//     Node* nodeTOinsert = new Node(d);
//     nodeTOinsert->next=temp->next;
//     temp->next = nodeTOinsert;

// }



// void deleteNode(Node* &head,int position,Node* &tail){


//     //deleting starting node;
//     if(position==1){
//         Node* temp = head;
//         head = head->next;

//         //memory free -- step 2
//         temp->next=NULL;
//         delete temp;
//     }

//     else{
//         Node* curr = head;
//         Node* prev = NULL;
//         int cnt = 1;
//         while(cnt<position){
//             prev=curr;
//             curr=curr->next;
//             cnt++;
//         }

//         if(curr->next==NULL){
//             tail = prev;
//         }

//         prev->next = curr->next;
//         curr->next=NULL;
//         delete curr;
//     }
// }


// void print(Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }



// int main()
// {
//     Node* node1 = new Node(5);
    
//     Node* head = node1;
//     Node* tail = node1;

//     print(head);

//     // insertionAtHead(head,4);
//     // insertionAtHead(head,15);
//     // insertionAtHead(head,6);

//     insertionAtTail(tail,4);
//     insertionAtTail(tail,15);
//     insertionAtTail(tail,6);


//     print(head);

//     insertATposition(head,tail,4,3);
//     insertATposition(head,tail,6,116);

//     print(head);


//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;

//     deleteNode(head,1,tail);
//     print(head);
//     deleteNode(head,5,tail);
//     print(head);

//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;

//     return 0;
// }


//*--------------------------------------------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor()
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    // Destructor()
    ~Node(){
        int val = this-> data;
        cout<<"memory of node "<<val<<" is now free"<<endl;
    }



};

//! InsertionatHead
void InsertionatHead(Node* &head , int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

//! InsertionatTail
void InsertionatTail(Node* &tail , int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
    }
}

//! InsertionatPosition
void InsertionatPosition(Node* &head, Node* &tail, int position, int d){
     if(position==1){
        InsertionatHead(head,d);
        return;
     }

     int cnt = 1;
     Node* temp = head;
     while(cnt<position-1){
        temp = temp->next;
        cnt++;
     }
     
     if(temp->next == NULL){
        InsertionatTail(tail,d);
        return;
     }

     Node* newNode = new Node(d);
     newNode->next = temp->next;
     temp->next = newNode;

}

//! deleteNode
void deleteNode(Node* &head,Node* &tail, int position){
    
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if(curr->next==NULL){
            tail = prev;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }

}





//! print
void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main()
{
    Node* Node1 = new Node(5);
    Node* head = Node1;
    Node* tail = Node1;

    // InsertionatHead(head,4);
    // InsertionatHead(head,3);
    // InsertionatHead(head,2);
    // InsertionatHead(head,1);

    InsertionatTail(tail,4);
    InsertionatTail(tail,3);
    InsertionatTail(tail,2);
    InsertionatTail(tail,1);

    print(head);

    InsertionatPosition(head,tail,3,6);
    print(head);

    InsertionatPosition(head,tail,1,111);
    print(head);

    InsertionatPosition(head,tail,8,999);
    print(head);

    cout<<"head - "<<head->data<<endl;
    cout<<"tail - "<<tail->data<<endl;


    deleteNode(head,tail,4);
    print(head);

    deleteNode(head,tail,1);
    print(head);

    deleteNode(head,tail,6);
    print(head);

    cout<<"head - "<<head->data<<endl;
    cout<<"tail - "<<tail->data<<endl;




    
    
    return 0;
}
