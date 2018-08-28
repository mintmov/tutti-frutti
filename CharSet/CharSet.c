/**
 * @file
 * @brief Implements the CharSet data structure.
 *
 */

#include "CharSet.h"

CharSetNode* CharSetNode_make ( char L ) {

  CharSetNode* node = malloc( sizeof(CharSetNode) );
  node->letter = L;
  node->random = rand() % sizeof(short);

  return node;
}

void CharSetNode_free ( CharSetNode* N ) {

  free( N );

}

CharSet* CharSet_make ( void ) {

  CharSet* set = malloc( sizeof(CharSet) );
  set->size = 0;
  set->head = NULL;

  CharSetNode* node;

  for( char c = 'A'; c <= 'Z'; c++ ) {
    node = CharSetNode_make(c); // make a node

    node->next = set->head; // append it to the list
    set->head  = node;
    set->size++;
  }

  return set;
}

void CharSet_free ( CharSet* S ) {

  CharSetNode* node_1; // "current node"
  CharSetNode* node_2; // "next node"
  for( node_1 = S->head; node_1 != NULL; node_1 = node_2 ) {
    node_2 = node_1->next; // iterate through list and free every node
    free(node_1);
  }
  free(S);

}

void pf_CharSet_sort ( CharSet* S ) {



}

char CharSet_pop ( CharSet* S ) {

  if( S->head == NULL ) { // list is empty
    return '\0';
  }

  CharSetNode* first  = S->head; // first node in list
  CharSetNode* second = S->head->next; // second node in list
  char ret = first->letter; // return value

  free( first ); // delete first node
  S->head = second; // make the second node head
  S->size--;
  return ret;

}




//
