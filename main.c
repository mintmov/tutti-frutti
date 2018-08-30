#include <stdio.h>
#include <time.h>
#include "CharSet/CharSet.h"

int main ( void ) {

  srand( time(NULL) );

  CharSet* set = CharSet_make();

  while( set->head != NULL ) {
    printf("%d ", set->head->random );
    printf("%c\n", CharSet_pop( set ) );
  }

  CharSet_free( set );

  return 0;
}
