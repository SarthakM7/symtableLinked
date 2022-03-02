
# Implementing Symbol Tables with Linked Lists:

A symbol table, or Symtable, is an important method for storing many pieces of information in large
scale software translation systems such as compilers. The symbol information is stored as bindings, each
of which consists of a key and a value. Similarly, a linked list consists of a chain of elements, or bindings in our project.
Each binding is stored as a node, that contains two fields, a key and value.

# Files included:
main.cpp: For calling the functions.</br>
symtable.h: Header file</br>
symtable_link.cpp: Implementation of the linked list.</br>
symtable_test.cpp: All test functions in this separate file.</br>
CMakeLists.txt To generate the Makefile.</br>
Makefile: Builds the symbol table.</br>

# Interface Specification:

1) node* Symtable_new()</br>
Creates a new SymTable structure with no bindings within it.

2) void SymTable_free (node* &head)</br>
Frees all the memory occupied by the symbol table, including all the allocated fields, bindings.

3) int SymTable_getLength (node* &head)</br>
Returns the total number of bindings within the table.

4) int SymTable_put (node* &head,int pcKey, int pvValue)</br>
If a pcKey isn’t already in the symbol table pointed, the SymTable_put function creates a binding consisting of pcKey and pvValue, inserts it into the symbol table,
and returns 1. If not enough memory is available or pcKey already is in the table, the function will leave return 0.

5) node* SymTable_replace (node* &head, int pcKey, int pvValue)</br>
SymTable_replace searches through the table to locate the binding with pcKey. If successful, the function replaces the binding’s old value with pvValue. If the binding with pcKey is not found, the function returns a NULL pointer.

6) int SymTable_contains (node* &head, int pcKey)</br>
SymTable_contains searches through the table to locate the binding with pcKey. If successful, the function returns 1. If the binding is not found, the function returns 0.

7) node* SymTable_get (node* &head, int pcKey)</br>
SymTable_get searches through the table to locate the binding with pcKey. If successful, the function returns the binding’s value. If not found, the function returns a NULL pointer.

8) node* SymTable_remove (node* &head, int pcKey)</br>
SymTable_remove searches through the table to locate the binding with pcKey. If successful, the function removes the binding from the table. If the binding is not found, the function will return a NULL pointer.

9) void SymTable_print(node* temp)</br>
SymTable_print prints the key and value of the node sent to it.

10) void SymTable_map (  node* &head, void (*pfApply)(node*)  )</br>
SymTable_map iterates through the entire SymTable and applies pfApply on each binding. pfApply takes a third parameter that is passed in from the map function.

# Testcases Specification:

test_put: Tests the SymTable_put function.</br>
test_remove: Tests the SymTable_remove function.</br>
test_length: Tests the SymTable_getLength function.</br>

