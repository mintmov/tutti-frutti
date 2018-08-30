#include <stdio.h>
#include <time.h>
#include "Charset/Charset.h"

int main ( void ) {

  srand( time(NULL) );

  Charset* set = Charset_make();

  while( set->head != NULL ) {
    printf("%d ", set->head->random );
    printf("%c\n", Charset_pop( set ) );
  }

  Charset_free( set );

  return 0;
}
