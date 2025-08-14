#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

   //constructor
    node(int data){
        this-> data=data;
        this->next=NULL;
    }
    
};
//insertion at head
void insertathead(node* &head,int d){
    node *temp= new node(d);
    temp->next=head;
    head=temp;
}

//insertion at end
void insertattail(node* &tail,int d ){
    node*temp=new node(d);
    tail->next=temp;
    tail=temp;
}

//insertion at any points
void insertatpos(node* &head ,int pos,int d){

    //traverse
    node*temp=head;
    int cunt=1;
    while(cunt<pos-1){
        cout<<temp<<" ";
        temp=temp->next;
    }

    //create node to inset
     node* nodetoinsert=new node(d);
     nodetoinsert->next=temp->next;
     temp->next=nodetoinsert;
}
     //delete
     void deletefirst(int position, node* &head){
       //delete start
       if(position==1){
        node* temp=head;
        head->next=head;
        delete temp;
       }
       else if{
        node*current=head;
        node* prev=NULL;

         int cunt=1;
        while(cunt<=position){
           
            prev=current;
            current=current->next;
            cunt++;
        }
           prev->next=current->next;
           delete current;

       

     }
    }



void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* num= new node(10);

   // cout<<num->data<<endl;
   //cout<<num->next<<endl;

   node* head= num;
   node*tail=num;
   print(head);

   insertathead(head,20);
   print(head);

   insertathead(head,40);
   print(head);
 
   insertattail(tail,80);
   print(head);

   insertatpos(head,3,222);
   print(head);

return 0;
}

