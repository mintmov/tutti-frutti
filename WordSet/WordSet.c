/**
 * @file
 * @brief Implements the CharSet data structure.
 *
 */

#include "WordSet.h"


WordSetNode* WordSetNode_make ( char L, bool EOW );


void WordSetNode_free ( WordSetNode* N );


WordSet* WordSet_make ( void );


void WordSet_free ( WordSet* WS );


void WordSet_insert ( WordSet* WS, char* str );


bool WordSet_contains ( WordSet* WS, char* str );
