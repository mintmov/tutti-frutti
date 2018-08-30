/**
 * @file
 * @brief Defines the Wordset data structure.
 *
 * Wordset allows insertion of strings and consulting wether a string is contained or not.
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
typedef struct WordsetNode {
  char letter; /**< Letter. */
  bool end_of_word; /**< True if this is the end of a word, false otherwise. */
  struct WordsetNode* children[ALPHABET_SIZE]; /**< Pointers to children. */
} WordsetNode;

/**
 * Initializes a node holding a specified letter and indicating if it's the end of a word or not.
 * @param The letter.
 * @param End_of_word boolean.
 * @return Pointer to the built node.
 */
WordsetNode* WordsetNode_make ( char L, bool EOW );

/**
 * Frees a node from memory.
 * @param Pointer to the node.
 */
void WordsetNode_free ( WordsetNode* N );

/**
 * @brief A Wordset.
 * children[letter-'0'] == NULL if there is no child with 'letter'.
 */
typedef struct Wordset {
  struct WordsetNode* children[ALPHABET_SIZE]; /**< Pointers to children. */
} Wordset;

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
