#include <stdio.h>

int binary_search(int a[], int e, int l, int r);

int main()
{
  // if we want to find an element's index in an unsorted list, we could search 
  // from left to right
  int unsorted[] = {9,5,13,3,8,7,2,12,6,10,4,11,1};
  
  // if we want to find an element's index in a sorted list, we could take 
  // advantage of the fact that the list is sorted with the binary search 
  // algorithm 
  int sorted[] =   {1,2,3,4,5,6,7,8,9,10,11,12,13};
  
  // test the function
  int index = binary_search(sorted, 12, 0, 12);
  printf("index of 12: %d\n", index);
  
  return 0;
}

// Returns the index of element e in array a, searching for the element between
// the left index l and the right index r.  Applies the binary search algorithm 
// recursively to conduct the search.  Returns -1 if element isn't in the array.
int binary_search(int a[], int e, int l, int r)
{

  // find the mid-way index between index l and index r  
  int mid =  (r + l) / 2;
  
  // if l is ever > r, it means the element is not in the array
  if (l > r) return -1;
  

  if (a[mid] == e)
    return mid;
  else if (a[mid] > e)
    return binary_search(a, e, l, mid );
  else
    return binary_search(a, e, mid, r);
  
}