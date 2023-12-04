#include <stdlib.h>
#include <stdio.h>


struct Node {
     struct Node *next;
      };
// Define a structure type
void printNode( const struct Node *ptrNode); 
int printList( const struct Node *first )
{
struct Node *ptr = first;

while( ptr != NULL ) {
printNode( ptr );
ptr = ptr->next;
}
}