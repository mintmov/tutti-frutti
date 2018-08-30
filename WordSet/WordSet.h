/**
 * @file
 * @brief Defines the Wordset data structure.
 *
 * Wordset allows insertion of strings and consulting wether a string is contained or not.
 *
 *
 * It's implemented with a trie. Each node contains a list of children (pointers to trie nodes).
 *
 */


#ifndef   INCLUDE_WORDSET_H
#define   INCLUDE_WORDSET_H

#include <stdbool.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

typedef struct Wordset                 Wordset;
typedef struct WordsetNode             WordsetNode;
typedef struct WordsetNodeChildren     WordsetNodeChildren;
typedef struct WordsetNodeChildrenNode WordsetNodeChildrenNode;

/**
 * 
 */
typedef struct Wordset {
  WordsetNodeChildren* children;
} Wordset;

typedef struct WordsetNode {
  char letter;
  WordsetNodeChildren* children;
} WordsetNode;

typedef struct WordsetNodeChildren {
  WordsetNodeChildrenNode* head;
} WordsetNodeChildren;

typedef struct WordsetNodeChildrenNode {
  WordsetNode* node;
  WordsetNodeChildrenNode* next;
} WordsetNodeChildrenNode;

WordsetNode* WordsetNode_make ( char L, bool EOW );

/**
 * Frees a node from memory.
 * @param Pointer to the node.
 */
void WordsetNode_free ( WordsetNode* N );

/**
 * Initializes a Wordset with no contents.
 * @return Pointer to the built set.
 */
Wordset* Wordset_make ( void );

/**
 * Frees a Wordset from memory.
 * @param Pointer to set.
 */
void Wordset_free ( Wordset* WS );

/**
 * Inserts a string into a set.
 * @param Pointer to the set.
 * @param Pointer to the string.
 */
void Wordset_insert ( Wordset* WS, char* str );

/**
 * Returns if a string is contained inside a set.
 * @param Pointer to the set.
 * @param Pointer to the string.
 */
bool Wordset_contains ( Wordset* WS, char* str );


#undef    INCLUDE_WORDSET_H
#endif // INCLUDE_WORDSET_H
