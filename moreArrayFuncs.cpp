#include <cassert>
#include "moreArrayFuncs.h"
using namespace std;


int indexOfMax(int *a, int size) {
  assert(size >= 1);
  
  // if current element is greater set temp variable to index of max
  int index = 0;
  for (int i=0; i<size-1; i++)
    if (a[i+1]>a[index])
      index = i+1;  
  return index;
}

int indexOfMin(int *a, int size) {
  assert(size >= 1);
  
  // exact same code as indexOfMin while accomodating for the min of an array
  int index = 0;
  for (int i=0; i<size-1; i++)
    if (a[i+1]<a[index])
      index = i+1;  
  return index;
}

int largestValue(int *a, int size) {
  assert(size >= 1);

  // goal: find max of a
  // first step: make placeholder var that has low int value assigned to it
  // second step: run a loop to find the max of a using the placeholder
  int max = -2000000000;
  for (int i=0; i<size; i++)
    if (a[i]>max)
      max = a[i];
  return max;
}

int smallestValue(int *a, int size) {
  assert(size >= 1);

  /* same steps as largestValue, except now placeholder should be extremely high
  and the loop should run to find the min of the array */
  int min = 2000000000;
  for (int i=0; i<size; i++)
    if (a[i]<min)
      min = a[i];
  return min;
}

int sum(int *a, int size) {
  // should be simple, loop through array and add a[i] to placeholder var
  int sum = a[0];
  for (int i=1; i<size; i++)
    sum += a[i];
  return sum;
}

void copyElements(int *dest, int *src, int n) {
  // should also be simple given elements of dest will be written over
  for (int i=0; i<n; i++)
    dest[i]=src[i];
}

int copyOddOnly(int *dest, int *src, int n) {
  // use modulo operator and a separate index for dest
  int copied = 0;
  int index = 0;
  for (int i=0; i<n; i++)
    if (src[i]%2==1||-1*(src[i])%2==1){
      dest[index++] = src[i];
      copied++;
    }
  return copied;
}

void multiplyPairwise(int *a, int *b, int *product, int n) {
  // precondition: a and b both have size n
  // goal: copy a[i]*b[i] into product[i] for each i in a or b
  for (int i=0; i<n; i++)
    product[i] = a[i]*b[i];
}

int* createArray(int len) {
  // create new pointer mapping to int array of size len
  // then, make all of its values 0 using a for loop
  int *arr = new int[len];
  for (int i=0; i<len; i++)
    arr[i] = 0;
  return arr;
}
