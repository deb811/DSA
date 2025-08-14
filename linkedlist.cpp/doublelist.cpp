#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;

    //constructor
    node(int d){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }

};

//insertion at start
void insertstart(node* &head, int d){
        node* temp= new node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
}
//insertion at tail
void inserttail(node* &tail,int d){
        node *temp= new node(d);
         tail->next=temp;
         temp->prev=tail;
         tail=temp;
}
 // insertion at any position
 void insert(node* &tail,node*head,int pos,int d){
    //insrt at start
    if (pos==1){
        insertstart(head,d);
        return;
    }

    node* temp=head;
    int cunt=1;
      while(cunt<pos-1){
        temp=temp->next;
        cunt++;
      }

    //insert at end
    if (temp->next==NULL){
        inserttail(tail,d);
      return;
    }

    node* nodetoinsert=new node(d);
    
    
    
      
 }
 

void print(node* &head){
    node* temp=head;

    while(temp!=NULL){
      cout<<temp->data;
      temp=temp->next;
    }
    cout<<endl;
}


int main(){

    node*node1=new node(13);
    node*head =node1;
    print(head);

    insertstart(head, 55);
    return 0;

}