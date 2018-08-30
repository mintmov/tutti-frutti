/**
 * @file
 * @brief Implements the Charset data structure.
 *
 */

#include "Charset.h"

CharsetNode* CharsetNode_make ( char L ) {

  CharsetNode* node = malloc( sizeof(CharsetNode) );
  node->letter = L;
  node->random = rand() % sizeof(short);

  return node;
}

void CharsetNode_free ( CharsetNode* N ) {

  free( N );

}

Charset* Charset_make ( void ) {

  Charset* set = malloc( sizeof(Charset) );
  set->head = NULL;

  CharsetNode* node;

  for( char c = 'A'; c <= 'Z'; c++ ) {
    node = CharsetNode_make(c); // make a node

    node->next = set->head; // append it to the list
    set->head  = node;
  }

  return set;
}

void Charset_free ( Charset* S ) {

  CharsetNode* node_1; // "current node"
  CharsetNode* node_2; // "next node"
  for( node_1 = S->head; node_1 != NULL; node_1 = node_2 ) {
    node_2 = node_1->next; // iterate through list and free every node
    free(node_1);
  }
  free(S);

}

void pf_Charset_sort ( Charset* S ) {



}

char Charset_pop ( Charset* S ) {

  if( S->head == NULL ) { // list is empty
    return '\0';
  }

  CharsetNode* first  = S->head; // first node in list
  CharsetNode* second = S->head->next; // second node in list
  char ret = first->letter; // return value

  free( first ); // delete first node
  S->head = second; // make the second node head
  return ret;

}




//
