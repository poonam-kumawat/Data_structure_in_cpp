#include<iostream> 
#include<stdlib.h> 
using namespace std; 
class quelink
{
    public: 
    struct node
    {
        int data; 
        node *next;
    }*front1=NULL,*rear,*temp;
    void ins()
    {
        temp=new node;
        cout<<"Enter data:";  
        cin>>temp->data; 
        temp->next=NULL;
        if(front1==NULL)
        front1=rear=temp;
        else
        {
            rear->next=temp; 
            rear=temp;

        }
    }
    void del()
    {
        if(front1==NULL)
        cout<<"Queue is empty\n";
        else
        {
            temp=front1;
            front1=front1->next;
            cout<<"\nElement is deleted from the queue\n"; 
            delete(temp);

        }
    }
    void dis()
    {
        if(front1==NULL)
        cout<<"Queue is empty\n";
        else
        {
            temp=front1; 
            while(temp!=NULL)
            {
                cout<<temp->data<<"\n"; 
                temp=temp->next;
            }
        }
    }
};
 
int main()
{
    cout<<"Roll No.33\n"; 
    quelink q;
    int ch; 
    while(1)
    {
        cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit"; 
        cout<<"\n\nEnter your choice:";
        cin>>ch; 
        cout<<"\n";
        switch(ch)
        {
            case 1: 
            q.ins();
            break;
            case 2: q.del(); break;
            case 3: q.dis();break;
            case 4: exit(0);break;
            default: cout<<"Wrong Choice!!!";
        }
    }
    return 0;
}
