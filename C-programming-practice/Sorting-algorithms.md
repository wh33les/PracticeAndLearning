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
<details>
<summary>Click to expand. </summary>

### Pros
* Runs __in place__, i.e., only a constant number of elements in the input array are stored outside of the array in running the algorithm.

Runs in _O(n<sup>2</sup>)_ time.

</details>

## Quicksort
<details>
<summary>Click to expand. </summary>

_O(n<sup>2</sup>)_; _O(n_ lg _n)_ (expected)

</details>

## Merge sort
<details>
<summary>Click to expand. </summary>

### Cons
* Does not run in place.

Runs in _O(n_ lg _n)_ time.

</details>

## Heapsort
<details>
<summary>Click to expand. </summary>

### Pros
* In place.

_O(n_ lg _n)_

</details>

# More sorting algorithms
## Bubble sort
In the __bubble sort__ algorithm, beginning with the last two entries of the array, two adjacent entries are compared.  If the entry on the right is smaller, then they are exchanged.  The effect is to "bubble" smaller elements to the front of the array.  On the pass _i_, the first _i_ entries of the array are already sorted, and so elements are bubbled only as far down as the _i_ th position (assuming indexing starts at 0, rather than 1).
```c
/* Bubble sort implementation
*/
/* MISCELLANEOUS PREAMBLE MATERIAL */
/* Prototype declarations */
  exchange(int key_number_1, int key_number_2);
  bubbleSort(int array_to_sort[], int array_size);
  
/* BODY OF THE MAIN PROGRAM */

/* ========== bubbleSort ==========
   DESCRIPTION OF IT
*/
void bubbleSort(int array_to_sort[], int array_size) 
{
/* Local definitions */
  int i, j; /* loop counters */
  int last = array_size - 1;
/* Statements */
  for (i = 0; i < last; i++)
    /* Starting from the end of the array, if two adjacent entries are out of order, then 
       they are exchanged.  Since the array is already sorted up to the ith entry, it only checks 
       the remaining n - i - 1 entries. */
    for (j = last; j > i; j--)  
      if (array_to_sort[j] < array_to_sort[j - 1])
        exchange(array_to_sort[j], array_to_sort[j - 1]);
  return;
}

/* ========== exchange ========== */
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
## Counting sort
<details>
<summary>Click to expand. </summary>

_O(k+n)_

</details>

## Radix sort
<details>
<summary>Click to expand. </summary>

_O(d(k+n))_

</details>

## Bucket sort
<details>
<summary>Click to expand. </summary>

_O(n<sup>2</sup>)_; _O(n)_ (average case)

</details>
