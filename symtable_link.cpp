#include <bits/stdc++.h>
#include "symtable.h"


using namespace std;

void node::SymTable_free (node* &head)
{
    node *temp=head;
    node *next=NULL;
    while(temp!=NULL)
    {
        next=temp->next;
        free(temp);
        temp=next;
    }
    head=NULL;
}

int node::SymTable_getLength (node* &head)
{
    node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int node::SymTable_put (node* &head,int pcKey, int pvValue)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->key==pcKey)
            return 0;
        temp=temp->next;
    }
    node *n =new node(pcKey,pvValue);
    if(head==NULL)
    {  
        head=n;
        return 1;
    }
    temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=n;
    return 1;
}

node* node::SymTable_replace (node* &head, int pcKey, int pvValue)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->key==pcKey)
            {
                temp->value=pvValue;
                return temp;
            }
        temp=temp->next;
    }
    return NULL;
}

int node::SymTable_contains (node* &head, int pcKey)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->key==pcKey)
                return 1;
        temp=temp->next;
    }
    return 0;
}

node* node::SymTable_get (node* &head, int pcKey)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->key==pcKey)
                return temp;
        temp=temp->next;
    }
    return NULL;
}

node* node::SymTable_remove (node* &head, int pcKey)
{
    if(pcKey==head->key)
    {
        node* delnode=head;
        head=head->next;
        delete delnode;
        return head;
    }
    node* temp=head;
    while(temp->next->key!=pcKey && temp!=NULL)
        temp=temp->next;
    if(temp==NULL)
        return NULL;
    node* delnode=temp->next;
    temp->next=temp->next->next;
    delete delnode;
    return head;
}

void SymTable_print(node* temp)
{
        cout<<temp->key<<"->"<<temp->value<<" ==>> ";
        //return head;
}
void node::SymTable_map (  node* &head, void (*pfApply)(node*)  )
{
    node* temp=head;
    while(temp!=NULL)
    {
        pfApply(temp);
        temp=temp->next;
    }
    cout<<endl;
}


