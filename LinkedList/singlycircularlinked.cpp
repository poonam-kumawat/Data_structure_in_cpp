

#include<iostream>

using namespace std;

class singly_circular
{
    public:
       // int flag=0;
        int pos, i, value ;
        struct node
        {
            int data;
            struct node *next;
            struct node *prev;
        };
        struct node *tmp=NULL;
        struct node *start=NULL;
        struct node *last=NULL;
        struct node *p=NULL;
        struct node *ptr=NULL;

        void create(int x)
        {
            tmp=new node;
            tmp->data=x;
            if(last==NULL)
            {
                last=tmp;
                tmp->next=last;
            }
            else
            {
                tmp->next=last->next;
                last->next=tmp;
                last=tmp;
            }
        }
        void add_atbegin(int x)
        {
            if(last==NULL)
            {
                cout<<"List is empty.\n";
            }
            tmp=new node;
            tmp->data=x;
            tmp->next=last->next;
            last->next=tmp;
        }
        void add_at(int x,int pos)
        {
            p=last->next;
            for(int i=1;i<pos-1;i++)
            {
                p=p->next;
                if(p==last->next)
                {
                    cout<<"Position does not exist.\n";
                    //break;
                }
            }
            tmp=new node;
             tmp->data=x;
            tmp->next=p->next;
            p->next=tmp;
            if(p==last)
            {
                last=tmp;
            }
        }
        void del(int x)
        {
            //p=last->next;
            if(last->next==last && last->data==x) // for only one node
            {
                tmp=last;
                last=NULL;
                delete(tmp);
                return;
            }
            p=last->next;
            if(p->data==x) //first element deleted
            {
                tmp=p;
                last->next=p->next;
                delete(tmp);
                return;
            }
            while(p->next!=last)
            {
                if(p->next->data==x)
                {
                    tmp=p->next;
                    p->next=tmp->next;
                    delete(tmp);
                    //cout<<"Deleted item "<<x;
                    return;
                }//delete element in between
                p=p->next;
            }
            if(p->next->data==x)
            {
                tmp=p->next;
                p->next=last->next;
                delete(tmp);
                last=p;
                return;
            }//last element deleted
            cout<<"Element not found.\n";
        }
        void search1(int x)
        {
            int pos=1;
            while(p->next!=last)
            {
                if(p->data==x)
                {
                    cout<<"Element found at position "<<pos-1<<".\n";
                }
                p=p->next;
                pos++;
            }
            if(p==NULL)
                cout<<"Item not found.\n";
        }

        void sort()
        {
            int x;
            if(last==NULL)
            {
                cout<<"List is empty.\n\n";
            }
            p=last->next;

            while(p!=last)
            {
                ptr=p->next;
                while(ptr!=last->next)
                {
                    if(ptr!=last->next)
                    {
                        if(p->data>ptr->data)
                        {
                            x=p->data;
                            p->data=ptr->data;
                            ptr->data=x;
                        }
                    }
                    ptr=ptr->next;
                }
                p=p->next;
            }
        }
        int count1()
        { int count1 =0;
            if(last==NULL)
            {
                cout<<"List is empty.\n\n";
            }
            else
            {
                p=last->next;

                while(p!=last)
                {
                    count1++;
                    p=p->next;
                }
                count1++;
                cout<<"Number of element are "<<count1<<"\n";
            }
        }

        void display()
        {
            if(last==NULL)
            {
                cout<<"List is empty.\n\n";
                return;
            }
            p=last->next;
            cout<<"\nSingly Circular Linked List :\n";
            while(p!=last)
            {
                cout<<p->data<<" -> ";
                p=p->next;
            }
            cout<<last->data<<"\n\n";
        }

};
int main()
{
    singly_circular d;
    int x,ch;
    int pos;

    while(ch!=9)
    {
        cout<<"1.Create a list\n2.Add at begin\n3.Add after\n4.Search\n";
        cout<<"5.Sort\n6.Count\n7.Display\n8.Delete\n9.Exit\n";
        cout<<"Enter the choice:\n";
        cin>>ch;

        switch(ch)
        {
        case 1:
            cout<<"Enter the value :\n";
            cin>>x;
            d.create(x);
            d.display();
            break;

        case 2:
            cout<<"Enter the value :\n";
            cin>>x;
            d.add_atbegin(x);
            d.display();
            break;

        case 3:
            cout<<"Enter the position :\n";
            cin>>pos;
            cout<<"Enter the value :\n";
            cin>>x;
            d.add_at(x,pos);
            d.display();
            break;

        case 4:
            cout<<"Enter element to be searched:\n";
            cin>>x;
            d.search1(x);
            d.display();
            break;

        case 5:
            cout<<"Before sorting -";
            d.display();
            d.sort();
            cout<<"After sorting -";
            d.display();
            break;

        case 6:
            d.count1();
            d.display();
            break;

        case 7:
            d.display();
            break;

        case 8:
            cout<<"Enter the element to be delete :\n";
            cin>>x;
            d.del(x);
            d.display();
            break;

        case 9:
            break;

        default:
            cout<<"Wrong choice.\n";
        }
    }
    return 0;
}
