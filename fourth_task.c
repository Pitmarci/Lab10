/* Task description:
Write a recursive function to print the elements of an array a) forwards b) backwards. Both functions should receive the array and its size on the parameter list.
Create in main an array of five, and another one of ten integers (initialized). Call both functions for both arrays.

*/

#include <stdio.h>

void n()
{
  printf("\n");
}

void forwards(int arr[], int len)
{
  if (len == 0)
    return;
  printf("%d ", *arr);
  forwards(arr + 1, len - 1);
}

void backwards(int arr[], int len)
{
  if (len == 0)
    return;
  backwards(arr + 1, len - 1);
  printf("%d ", *arr);
}

int main()
{

  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  forwards(arr1, 5);
  n();
  backwards(arr1, 5);
  n();
  forwards(arr2, 10);
  n();
  backwards(arr2, 10);

  return 0;
}
