#include <bits/stdc++.h>
#include "symtable.h"


using namespace std;

static int cnt=0;

static node *head2;

static void test_put(int pcKey,int pvValue)
{
    
    int gets = head2->SymTable_put(head2,pcKey,pvValue);
    if(gets==1)
    {
        cnt++;
        cout<<"test_put passed"<<endl;
    }
    else
        cout<<"test_put failed!!"<<endl;
}

static void test_remove(int pcKey)
{
    
    node* temp = head2->SymTable_remove(head2,pcKey);
    if(temp==head2)
    {
        cout<<"test_remove passed"<<endl;
        cnt--;
    }
    else
        cout<<"test_put failed!!"<<endl;
}

static void test_length()
{
    int len=head2->SymTable_getLength(head2);
    if(len==cnt)
        cout<<"test_length passed"<<endl;
    else   
        cout<<"test_length failed"<<endl;

}


