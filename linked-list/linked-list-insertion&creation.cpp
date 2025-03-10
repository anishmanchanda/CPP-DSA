#include <iostream>
using namespace std;
class Node{
    public:
    int val;//could be string or anything, whatever req to store
    Node* next;//node* is pointer variable (address)
    Node(int data){
        val=data;
        next=NULL;
    }
};
//function to insert new node at start of LL
void insertAtHead(Node* &head,int val){
        //passing by ref. so changes can be made in LL
    Node* n=new Node(val);
    n->next=head;
    head=n; 
}
void insertAtTail(Node* &head, int val){
        //passing by ref.
    Node* n=new Node(val);
    Node* temp=head;
    while(temp!=NULL){
        if((temp->next)==NULL){
            temp->next=n;
            n->next=NULL;
            break;
        }
        temp=temp->next;
    }
}
void insertAtArbitrary(Node* &head,int val,int pos){
                        //pos is index(start from 0)
    Node* n=new Node(val);
    Node* temp=head;
    int idx=0;
    while(temp!=NULL){
        if(pos==0){
            n->next=head;
            head=n;
            break;      
        }
        if(idx==pos-1){
            Node* temp2=temp->next;
            temp->next=n;
            n->next=temp2;
            break;
        }
        temp=temp->next;
        idx++;
        
    }

}
//function to display LL
void display(Node* head){
    cout<<endl;
    //passing by value bcs no change
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    //Node* n=new Node(1);
    //cout<<n->val<<" "<<n->next<<endl;

    Node* head=NULL;//empty LL created
    
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,5);
    insertAtTail(head,10);
    display(head);
    insertAtArbitrary(head,100,2);
    display(head);
    insertAtArbitrary(head,200,3);
    display(head);
    insertAtArbitrary(head,300,0);
    display(head);
    cout<<endl;
    return 0;
}