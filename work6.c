#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

// 1) Create an array large enough to store 10 ints.
  int array1[10] = {0}; // Had to look this up to see how to initialize all to 0.

// 2) Populate the array with random values.
  int i;
  srand(time(NULL));
  for (i=0; i<10; i++) {
    array1[i] = rand();
  }

// 3) Set the last value in the array to 0.
  array1[9] = 0;

// 4) Print out the values in this array.
  printf("Array 1:\n");
  for (i=0; i<10; i++) {
    printf("array1[%d]: %d\n", i, array1[i]);
  }

// 5) Create a separate array large enough to store 10 ints.
  int array2[10] = {0}; // Had to look this up to see how to initialize all to 0.

// 6) USING ONLY POINTER VARIABLES (that is, do not use the array variables) do the following:
// Populate the second array with the values in the first but in reverse order.

  int *array1pointer = array1;
  int *array2pointer = array2;
  for (i=0; i<10; i++) {
    *(array2pointer+i) = *(array1pointer+9-i);
  }

// Print out the values in the second array.
  printf("\nArray 2:\n");
  for (i=0; i<10; i++) {
    printf("array2[%d]: %d\n", i, *(array2+i));
  }

  return 0;

}
