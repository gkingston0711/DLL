#include"DLL.h"
#include<iostream>
using namespace std;

node::node()
{
    next=NULL;
    prev=NULL;
    data=0;
}
node::node(int value)
{
    node *new_node=new node;
    new_node->data=value;
    new_node->prev=NULL;
    new_node->next=NULL;
}

node::~node()
{
delete next;
delete prev;

}

void node::link_next(node * connection)
{
    next=connection;
}

void node::link_prev(node *connection)
{
    prev=connection;
}


int node::get_data()
{
    return data;
}

void node::set_data(int value)
{
    this->data=value;
}

node * node::go_next()
{
    return next;
}
node * node::go_prev()
{
    return prev;
}

DLL::DLL()
{
    head=NULL;
}
DLL::~DLL()
{
    head = NULL;
    delete head;
}

void DLL::add_node(int value)
{

    node *new_node=new node;
    new_node->set_data(value);
    new_node->link_next(NULL);
    new_node->link_prev(NULL);
    

    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        new_node->link_next(head);
        head->link_prev(new_node);
        head=new_node;
    }
}

void DLL::display()
{
    return display(head);
}

void DLL::display(node *head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        cout<<head->get_data()<<"->";
        display(head->go_next());
    }
}

void DLL::remove(int value)
{
    return remove(head,value);
}

void DLL::remove(node *head,int value)
{
    /*
    if(head==NULL)
    {
        return;
    }
    else if(head->get_data()==value)
    {
        head=link_next(head->get_());//maybe
        return;
    }
    else
    {
        remove(head->next,value);
    }
    */
}



