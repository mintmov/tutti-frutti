#include <stdio.h>
#include <time.h>
#include "CharSet/CharSet.h"

int main ( void ) {

  srand( time(NULL) );

  CharSet* set = CharSet_make();

  while( set->size > 0 ) {
    printf("%c ", CharSet_pop( set ) );
  }

  CharSet_free( set );

  return 0;
}
