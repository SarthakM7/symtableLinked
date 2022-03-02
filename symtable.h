#include <cstddef>
#ifndef symtable_H
#define symtable_H

class node
{
    public:
    int key;
    int value;
    node* next;
    node(int pcKey,int pcValue)
    {
        key=pcKey;
        value=pcValue;
        next=NULL;
    }  
    void Symtable_new();
    void SymTable_free (node* &head);
    int SymTable_getLength (node* &head);
    int SymTable_put (node* &head, int pcKey, int pvValue);
    node* SymTable_replace (node* &head, int pcKey, int pvValue);
    int SymTable_contains (node* &head, int pcKey);
    node* SymTable_get (node* &head, int pcKey);
    node* SymTable_remove (node* &head, int pcKey);

    
    void SymTable_map ( node* &head, void(*pfApply)(node*) );

};

void SymTable_print(node* temp);
#endif
