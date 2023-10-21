//PROGRAM TO CREATE LINKED LIST AND DISPLAY THE SAME

#include<iostream>
using namespace std;

struct node //structure of node
{
    int data;  //node data 
    node *next;  //next pointer
};

void createlist(int size) //function to create list
{
    int data;
    node *head,*newnode,*temp;
    head=new node(); //allocating memory for head node
    if(head==nullptr)
        cout<<"MEMORY ALLOCATION UNSUCCESSFUL."<<endl;
    else
        cout<<"ENTER DATA 1"<<":"; //allocating memory for head node
        cin>>data;

        head->data=data;
        head->next=nullptr;
        temp=head;

        for(int i=2;i<=size;i++) //allocating memory and allocating memory for next nodes
        {
            newnode= new node();
            if(newnode==nullptr)
                cout<<"MEMORY ALLOCATION UNSUCCESSFUL."<<endl;
            else
                cout<<"ENTER DATA "<<i<<":";
                cin>>data;

                newnode->data=data;
                newnode->next=nullptr;
                temp->next=newnode;
                temp=temp->next;

        }
}

void display(int size)  //function to display list
{
    int data;
    node *head,*newnode,*temp;
    temp=head;
        cout<<"\n---------DISPLAYING DATA---------"<<endl;
        for(int i=1;i<=size;i++) //displaying all elements of the list
        {
            cout<<"DATA "<<i<<":"<<temp->data<<endl;
            temp=temp->next;
        }
}

int main()
{
   
    int size;
    cout<<"ENTER SIZE OF LINKED LIST:"; //input of size of list
    cin>>size;
    createlist(size); //function calling to create list
    display(size); //function calling to display list
   
        
}