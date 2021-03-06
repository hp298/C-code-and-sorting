//========================================================================
//quick-sort-random-tests.c
//========================================================================
// This file contains the random test casess for the quick sort
// function.

#include <stdio.h>
#include <stdlib.h>
#include "ece2400-stdlib.h"
#include "utst.h"
#include "quick-sort.h"

//------------------------------------------------------------------------
// test_case_1_simple
//------------------------------------------------------------------------
// Students: This test case does nothing. You need to replace this test
// case with your own random test case.

void test_case_1_simple()
{
  printf( "\n%s\n", __func__ );
  srand( 0x8BadBeef );
  
  int a[100];
  int b[100];
  
  // random number
  for ( int i = 0; i < 100; i++ ) {
    int randy = rand() % 1000 + 1;
    a[i] = randy;
    b[i] = randy;
  }
  // sort the random array
  quick_sort( a, 100);
  ece2400_sort( b, 100);

  // check every index
  for ( int i = 0; i < 100; i++ ) {
    UTST_ASSERT_INT_EQ( a[i] , b[i] );
  }
}

//------------------------------------------------------------------------
// main
//------------------------------------------------------------------------

int main( int argc, char** argv )
{
  __n = ( argc == 1 ) ? 0 : atoi( argv[1] );

  if ( ( __n == 0 ) || ( __n == 1 ) )
    test_case_1_simple();

  //'''' ASSIGNMENT TASK '''''''''''''''''''''''''''''''''''''''''''''''''
  // Add some random tests!
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

  return 0;
}
