// #include <bits/stdc++.h>
// using namespace std;


// class node{
//     public:
//         int data;
//         node* next;


    
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

//     ~node(){

//     }
// };




// void print(node* &head){
//     node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }

//     cout<<endl;
// }






// void insertionAtHead(node* &head , int d){
//     node* temp = new node(d);
//     temp->next = head;
//     head = temp;
// }



// void insertionAtTail(node* &tail,int d){
//     node* temp = new node(d);
//     tail->next = temp;
//     tail = temp;
// }





// void insertionAtMid(node* &head,node* &tail,int d,int position){

//     if(position == 1){
//         insertionAtHead(head,d);
//         return;
//     }


//     int i = 1;
//     node* temp = head;



//     while(i<position-1){
//         temp = temp->next;
//         i++;
//     }



//     if(temp->next==NULL){
//         insertionAtTail(tail,d);
//         return;
//     }


//     node* newNode = new node(d);
//     newNode->next = temp->next;
//     temp->next = newNode;

// }





// void deleteNode(node* &head,node* &tail,int position){
//     if(position == 1){
//         node* temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;

//         if(head == NULL){
//             tail = NULL;
//         }
//     }

//     else{
//         node* curr = head;
//         node* prev = NULL;

//         int cnt = 1;
//         while(cnt<position){
//             prev = curr;
//             curr = curr->next;
//             cnt++;
//         }

//          if(curr->next == NULL){
//             tail = prev;
//         }


//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;

//     }
// }






// int main()
// {
    
//     node* node1 = new node(5);
//     node* head = node1;
//     node* tail = node1 ;

//     insertionAtHead(head , 9);
//     insertionAtHead(head , 11);

//     insertionAtTail(tail,3);


//     insertionAtMid(head,tail,7,3);
    

//     print(head);


//     deleteNode(head,tail,1);
    

//     print(head);

//     cout<<head->data<<" ";
//     cout<<tail->data<<endl;
//     return 0;
// }




// *********************************************************************************





//doubly linked list

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;



    node(int data){
        this->data=data;
        this->next =NULL;
        this->prev = NULL;
    }

    ~node(){

    }

};

void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}


insertionAtHead(node* &head,node* &tail,int d){

    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }

    else{
        node* temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}




void insertionAtTail(node* &head,node* &tail,int d){
    
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}



void insertionAtMid(node* &head,node* &tail,int d,int position){
    if(position==1){
        insertionAtHead(head,tail,d);
        return;
    }

    int cnt = 1;
    node* temp = head;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertionAtTail(head,tail,d);
        return;
    }

    node* newNode = new node(d);
    newNode->next=temp->next;
    temp->next = newNode;
    newNode->prev = temp;

}


void deleteNode(node* &head,node* &tail,int position){

    if(position==1){
        node* temp = head;
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }

    // if(head == NULL){
    //     tail = NULL;
    // }

else{
    node* curr = head;
    node* previous = NULL;
    int cnt = 1;
    while(cnt<position){
        previous = curr;
        curr=curr->next;
        cnt++;
    }

    if(curr->next==NULL){
        tail = previous;
    }
   
    curr->prev = NULL;
    previous->next = curr->next;
    // curr->next->prev = previous;
    curr->next = NULL;

        delete curr;
}
}


int main()
{
    node* newNode = new node(3);
    node* head = newNode;
    node* tail = newNode;


    insertionAtHead(head,tail,2);
    insertionAtHead(head,tail,1);
    insertionAtTail(head,tail,4);
    insertionAtTail(head,tail,5);
    insertionAtMid(head,tail,6,3);
    insertionAtMid(head,tail,7,4);
    insertionAtMid(head,tail,8,1);
    insertionAtMid(head,tail,9,9);

    print(head);


    deleteNode(head,tail,4);
    deleteNode(head,tail,4);
    deleteNode(head,tail,1);
    deleteNode(head,tail,6);

    print(head);

    cout<<head->data<<" ";
    cout<<tail->data;

    return 0;
}
