/**
 * @file
 * @brief Defines the Charset data structure.
 *
 * Charset can be initialized with all the letters of the english alphabet and allows extraction of
 * random letters.
 *
 * It's implemented as a singly linked list. Each node contains a letter and a random ID number.
 * When it's initialized, the set is populated with all letters of the alphabet and sorted by these random
 * ID numbers, randomizing it.
 *
 * Extracting a random letter is done by extracting the head of the list.
 *
 */

#ifndef   INCLUDE_CHARSET_H
#define   INCLUDE_CHARSET_H

#include <stdlib.h>

/**
 * @brief A Node of a list.
 */
typedef struct CharsetNode {
  char letter; /**< Letter. */
  short random; /**< Random ID number. */
  struct CharsetNode* next; /**< Pointer to next node. */
} CharsetNode;

/**
 * Initializes a node holding a specified letter.
 * @param The letter.
 * @return Pointer to the built node.
 */
CharsetNode* CharsetNode_make ( char L );

/**
 * Frees a node from memory.
 * @param Pointer to the node.
 */
void CharsetNode_free ( CharsetNode* N );


/**
 * @brief A Charset.
 */
typedef struct Charset {
  CharsetNode* head; /**< The head of the list. */
} Charset;

/**
 * Initializes a Charset for use.
 * @return Pointer to the built set.
 */
Charset* Charset_make ( void );

/**
 * Frees a set from memory.
 * @param Pointer to the set.
 */
void Charset_free ( Charset* S );

/**
 * @brief Sorts a list by IDs, randomizing it.
 * A merge sort is used, sorting in O(NlogN).
 * @param Pointer to the set.
 */
void pf_Charset_sort ( Charset* S );

/**
 * Extracts a random letter from the set.
 * Returns '\0' if the list is empty.
 * @param Pointer to the set.
 * @return Letter extracted.
 */
char Charset_pop ( Charset* S );


#undef    INCLUDE_CHARSET_H
#endif // INCLUDE_CHARSET_H
