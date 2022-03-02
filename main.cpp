#include "symtable.h"
#include "symtable_test.cpp"
#include <bits/stdc++.h>

using namespace std;

node* Symtable_new()
{
    node* ptr =NULL;
    return ptr;
}
int main()
{
    //cout<<"check1"<<endl;
    node *head;
    head=Symtable_new();
    // cout<<"check2"<<endl;
    head->SymTable_put(head,1,25);      
    head->SymTable_put(head,2,50);
    head->SymTable_put(head,3,75);
    head->SymTable_put(head,4,90);
    head->SymTable_put(head,5,125);
    head->SymTable_put(head,6,150);
    //cout<<"check3"<<endl;
    cout<<head->SymTable_getLength(head)<<endl;
    //cout<<"check4"<<endl;
    head->SymTable_replace(head,4,100);
    //cout<<"check5"<<endl;
    cout<<head->SymTable_contains(head,5)<<endl;

    node*tempo=head->SymTable_get(head,2);
    if(tempo==NULL)
        cout<<"not present"<<endl;
    else
        cout<<tempo->key<<" "<<tempo->value<<endl;
    
    //cout<<"check6"<<endl;

    head->SymTable_remove(head,6);

    //cout<<"check7"<<endl;

    //head->SymTable_print(head);

    ////////////////////
    // void (*pfApply)(node*);
    // pfApply=&head->SymTable_print;
    head->SymTable_map(head, SymTable_print);
    ////////////////////

    //cout<<"check8"<<endl;
    head->SymTable_free(head);
    //cout<<"check9"<<endl;


    //testing:
    test_put(1,10);
    test_put(2,20);
    test_put(3,30);
    test_put(4,40);
    test_length();
    test_remove(3);
    test_length();

    return 0;
}

