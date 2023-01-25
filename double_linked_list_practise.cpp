#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* previous_address;
        node* next_address;
            node(){}
            node(int data){
              this->data=data;
              previous_address=NULL;
              next_address=NULL;
            }
            int insert_at_tail(node* &tail,int data){
                node* new_node=new node(data);
                tail->next_address=new_node;
                new_node->previous_address=tail;
                tail=new_node;
            }
            int display(node* &head){
                node* temp=head->next_address;
                cout<<"|"<<"previous_link"<<"|\t"<<"|"<<"data"<<"|\t"<<"|"<<"current_add"<<"|\t"<<"|"<<"next_link"<<"|\t"<<endl;                while(temp!=NULL){
                    cout<<"|"<<temp->previous_address<<"|"<<"\t";
                    cout<<"|"<<temp->data<<"|"<<"\t";
                    cout<<"|"<<temp<<"|"<<"\t";
                    cout<<"|"<<temp->next_address<<"|"<<endl;
                    temp=temp->next_address;
                }
            }
};
int main(){
    node* node1=new node(0);
    node* tail=node1;
    node* header=node1;

    node1->insert_at_tail(tail,10);
     node1->insert_at_tail(tail,11);
     node1->insert_at_tail(tail,12);
     node1->insert_at_tail(tail,13);
     node1->insert_at_tail(tail,14);

     node1->display(header);
    
     return 0;
}