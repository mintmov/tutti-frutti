/**
 * @file
 * @brief Implements the CharSet data structure.
 *
 */

#include "Wordset.h"


WordsetNode* WordsetNode_make ( char L, bool EOW );


void WordsetNode_free ( WordsetNode* N );


Wordset* Wordset_make ( void );


void Wordset_free ( Wordset* WS );


void Wordset_insert ( Wordset* WS, char* str );


bool Wordset_contains ( Wordset* WS, char* str );
