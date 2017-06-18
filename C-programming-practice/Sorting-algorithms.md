# Sorting algorithms

## Selection sort
<details>
<summary>Click to expand. </summary>

__Selection sort__ divides an array into a sorted subarray _A_ of size _i_ on the left and an unsorted subarray _B_ of size _n-i_ on the right.  Using a loop, it searches for the smallest element in _B_ and places it in the _(i+1)_ st spot in the full array by exchanging it with the first element of _B_.    
```c
/* Selection sort implementation
*/
/* MISCELLANEOUS PREAMBLE MATERIAL */
/* Prototype declarations */
  exchange(int key_number_1, int key_number_2);
  selectionSort(int array_to_sort[]; int array_size);
  
/* BODY OF THE MAIN PROGRAM */

/* ========== selectionSort ==========
   DESCRIPTION OF IT
*/
void selectionSort(int array_to_sort[], int array_size) 
  /* Unfortunately, in C, passing an array to a function only passes the array's address.  
    If the function needs it, then the size of the array must be entered as an argument.
  */
{
/* Local definitions */
  int i,j; /* loop counters */
  int last = array_size - 1;
/* Statements */
  for (i = 0; i < last; i++)
    smallest = i;
    /* Search for the smallest key in the subarray consisting of the last array_size - i - 1 
      elements */
    for (j = i + 1; j <= last; j++)  
      if (array_to_sort[j] < array_to_sort[smallest])
        smallest = j;
    /* Once found, make the smallest key the (i+1)st entry of array_to_sort */
    exchange(array_to_sort[i], array_to_sort[smallest]);
  return;
}

/* ========== exchange ==========
   This is written as a function.  It takes two integers and exchanges them. Is it possible to make 
   this a so-called macro, i.e., to put this in the preamble of the entire program?
*/
void exchange(int key_number_1, int key_number_2)
{
/* Local definitions */
  int temp_storage;
/* Statements */
  temp_storage = key_number_2;
  key_number_2 = key_number_1;
  key_number_1 = temp_storage;
  return;
}
```
</details>

## Insertion sort
### Pros
* Runs __in place__, i.e., only a constant number of elements in the input array are stored outside of the array in running the algorithm.

Runs in _O(n<sup>2</sup>)_ time.

## Quicksort
_O(n<sup>2</sup>)_; _O(n_ lg _n)_ (expected)

## Merge sort
### Cons
* Does not run in place.

Runs in _O(n_ lg _n)_ time.

## Heapsort
### Pros
* In place.

_O(n_ lg _n)_

# More sorting algorithms
## Bubble sort

## Counting sort
_O(k+n)_

## Radix sort
_O(d(k+n))_

## Bucket sort
_O(n<sup>2</sup>)_; _O(n)_ (average case)
