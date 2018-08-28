
#ifndef   INCLUDE_CHARSET_H
#define   INCLUDE_CHARSET_H

typedef struct {
  char letter;
  short random;
  struct CharSetNode* next;
} CharSetNode;

CharSetNode* CharSetNode_make ( char L );

void CharSetNode_free ( CharSetNode* N );

typedef struct {
  CharSetNode* head;
  short size;
} CharSet;

CharSet* CharSet_make ( void );

void CharSet_free ( CharSet* S );

void pf_CharSet_sort ( CharSet* S );

char CharSet_pop ( CharSet* S );

#undef    INCLUDE_CHARSET_H
#endif // INCLUDE_CHARSET_H
