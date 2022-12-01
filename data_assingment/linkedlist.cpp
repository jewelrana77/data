#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertathead(node* &head,int val)
{
    node* new_node=new node(val);
    new_node->next=head;
    head=new_node;
}
void insertafter(node* head,int key,int val)
{
    node* new_node=new node(val);
    if(key==head->data)
    {
        new_node->next=head->next;
        head->next=new_node;
        return;
    }
    node* temp=head;
    while (temp->data!=key)
    {
        temp=temp->next;
        if (temp ==NULL)
        {
            return;
        }
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void insertattail(node*&head,int val)
{
    node* new_node=new node(val);
    if(head==NULL)
    {
        head=new_node;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
void deleteathead(node* &head)
{
    node* temp=head;
    head=head->next;
    delete temp;
}
void deleteafter(node* &head,int key)
{
    node *temp=head;
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    while(temp->next->data!=key)
    {
        temp=temp->next;
        if(temp->data==NULL)
        {
            return;
        }
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void deleteatend(node* &head)
{
    node* temp=head;
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
    delete head;
    }
while(temp->next->data!=NULL){
    temp=temp->next;
}
node* todelete=temp->next;
temp->next=NULL;
delete todelete;
}
bool search(node* head,int key)
{
    while(head->data==key)
    {
        return true;
        head=head->next;
    }
    return false;
}
void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
    system("pause");
}
int main()
{
    node* head=NULL;
   int choice;
   do{
        system("cls");
    cout<< "----linkedlist---- "<<"\n";
    cout<< " 1.insert node linkedlist at the head "<<"\n";
    cout<< " 2.insert node linkedlist after position "<<"\n";
    cout<< " 3.insert node linkedlist at the end "<<"\n";
    cout<< " 4.delete node linkedlist at the head "<<"\n";
    cout<< " 5.delete node linkedlist after the position "<<"\n";
    cout<< " 6.delete node linkedlist at the end "<<"\n";
    cout<< " 7.searching the node if found print 1 other wise 0"<<"\n";
    cout<< " 8.exit"<<"\n";
    cin>>choice;
    switch(choice){
        case 1:
        int x;
        cout<<"insert node at the head"<<"\n";
        cin>>x;
        insertathead(head,x);
        display(head);
        cout<<"\n";
        break;
         case 2:
        int val,k;
        cout<<"insert node at the node"<<"\n";
        cin>>k>>val;
        insertafter(head,k,val);
        display(head);
        cout<<"\n";
        break;
         case 3:
        int value;
        cout<<"insert node at the end"<<"\n";
        cin>>value;
        insertattail(head,value);
        display(head);
        cout<<"\n";
        break;
         case 4:
        deleteathead(head);
        cout<<"delete head node after linkedlist"<<"\n";
        display(head);
        cout<<"\n";
        break;
         case 5:
         int key;
         cin>>key;
         insertathead(head,key);
        cout<<"delete after position node after linkedlist"<<"\n";
        display(head);
        cout<<"\n";
        break;
         case 6:
         deleteatend(head);
        cout<<"delete end node  after linkedlist"<<"\n";
        display(head);
        cout<<"\n";
        break;
         case 7:
         int kk;
         cin>>kk;
        cout<<"if node found print 1 otherwise print 0:"<<"\n";
        cout<<search(head,kk)<<"\n";
        break;
        case 8:
        exit(0);
        break;
    }
   }
   while(1);
    return 0;
}
