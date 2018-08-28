/**
 * @file
 * @brief Defines the WordSet data structure.
 *
 * WordSet allows insertion of strings and consulting wether a string is contained or not.
 *
 *
 * It's implemented with a trie. Each node contains an array of children (pointers to trie nodes).
 *
 */


#ifndef   INCLUDE_WORDSET_H
#define   INCLUDE_WORDSET_H

#include <stdbool.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

/**
 * @brief A trie node.
 * children[letter-'0'] == NULL if there is no child with 'letter'.
 */
typedef struct WordSetNode {
  char letter; /**< Letter. */
  bool end_of_word; /**< True if this is the end of a word, false otherwise. */
  struct WordSetNode* children[ALPHABET_SIZE]; /**< Pointers to children. */
} WordSetNode;

/**
 * Initializes a node holding a specified letter and indicating if it's the end of a word or not.
 * @param The letter.
 * @param End_of_word boolean.
 * @return Pointer to the built node.
 */
WordSetNode* WordSetNode_make ( char L, bool EOW );

/**
 * Frees a node from memory.
 * @param Pointer to the node.
 */
void WordSetNode_free ( WordSetNode* N );

/**
 * @brief A WordSet.
 * children[letter-'0'] == NULL if there is no child with 'letter'.
 */
typedef struct WordSet {
  struct WordSetNode* children[ALPHABET_SIZE]; /**< Pointers to children. */
} WordSet;

/**
 * Initializes a WordSet with no contents.
 * @return Pointer to the built set.
 */
WordSet* WordSet_make ( void );

/**
 * Frees a WordSet from memory.
 * @param Pointer to set.
 */
void WordSet_free ( WordSet* WS );

/**
 * Inserts a string into a set.
 * @param Pointer to the set.
 * @param Pointer to the string.
 */
void WordSet_insert ( WordSet* WS, char* str );

/**
 * Returns if a string is contained inside a set.
 * @param Pointer to the set.
 * @param Pointer to the string.
 */
bool WordSet_contains ( WordSet* WS, char* str );


#undef    INCLUDE_WORDSET_H
#endif // INCLUDE_WORDSET_H
