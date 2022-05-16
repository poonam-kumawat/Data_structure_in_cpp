#include<iostream>
#include<stack>
using namespace std;
class stklinklist
{
    public:
    struct node
    {
        int data;
        node *next;
    };
    node *top;
    stklinklist()
    {
        top=NULL;
    }
    int PUSH(int x)
    {
        node *tmp=new node();
        tmp->data=x;
        tmp->next=top;
        top=tmp;
        cout<<"\nElement inserted into the stack\n\n";
        return tmp->data;
    }
    int POP()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty!\n\n";
        }
        else
        {
            node *tmp=new node;
            tmp=top;
            top=tmp->next;
            cout<<"\nElement deleted from the stack\n\n";
            return tmp->data;
        }
    }
    void display()
    {
        if(top==NULL)
        {
            cout<<"\nStack is empty\n";
        }
        else
        {
            node *tmp=new node; tmp=top;
            while(tmp!=NULL)
            {
                cout<<tmp->data<<"\n";
                tmp=tmp->next;
            }
            cout<<"\n";
        }
    }
};
int main()
{
    stklinklist sl;
    int n,s;
    while(1)
    {
        cout<<"1)PUSH\n"<<"2)POP\n"<<"3)DISPLAY\n"<<"4)EXIT\n"<<"\nEnter your choice: ";
        cin>>n;
        switch(n)
        {
            case 1:
            cout<<"\nEnter element to Insert: ";
            cin>>s;
            sl.PUSH(s);
            break;
            case 2:
            sl.POP();
            break;
            case 3:
            sl.display();
            break;
            case 4:exit(0);
            break;
            default:cout<<"\nInvalid Option\n";
        }
    }
    return 0;
}

