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
  selectionSort(int array_to_sort[]; int array_size);
  exchange(int key_number_1, int key_number_2);
/* Global definitions */
  int some_array_A[]; /* array that will be sorted */
  size_t array_size_A = sizeof(some_array_A)/sizeof(some_array_A[0]); /* the array's size */
  
/* BODY OF THE MAIN PROGRAM */

/* ========== selectionSort ==========
   DESCRIPTION OF IT
*/
void selectionSort(int array_to_sort[], int array_size) 
  /* Unfortunately, in C, passing an array to a function only passes the array's address.  As a consequence, 
     sizeof() cannot be used.  If the function needs it, then the size of the array must be entered as an 
     argument.
  */
{
/* Local definitions */
  int i, j; /* loop counters */
  int last = array_size - 1;
/* Statements */
  for (i = 0; i < last; i++)
    {
    smallest = i;
    /* Search for the smallest key in the subarray consisting of the last array_size - i - 1 
       elements 
    */
    for (j = i + 1; j <= last; j++)
      {
      if (array_to_sort[j] < array_to_sort[smallest])
        smallest = j;
      /* Once found, make the smallest key the (i+1)st entry of array_to_sort */
      exchange(array_to_sort[i], array_to_sort[smallest]);
      } /* for loop j */
    } /* for loop i */
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

Like with the selection sort, the array to be sorted is split into a sorted subarray _A_ consisting of the first _i_ entries and an unsorted subarray _B_ consisting of the remaining entries.  On each pass (iteration of a loop indexed by _i_), __insertion sort__ compares the first entry of _B_ with each entry of _A_ and inserts it into the correct spot.
```c
/* Insertion sort implementation
*/
/* MISCELLANEOUS PREAMBLE MATERIAL */
  
/* BODY OF THE MAIN PROGRAM */

/* ========== insertionSort ==========
   DESCRIPTION OF IT
*/
void insertionSort(int array_to_sort[], int array_size) 
{
/* Local definitions */
  int i, j; /* loop counters */
  int located; /* indicator variable*/
  int current_entry;
/* Statements */
  for (i = 1; i < array_size; i++) /* start at second element */
    {
    located = FALSE;
    current_entry = array_to_sort[i];
    for (j = i - 1; j >= 0 && !located;) /* no updating expression; worked into the if statement */   
      {
      if (current_entry < array_to_sort[j])
        {
        array_to_sort[j+1] = array_to_sort[j]; /* shifts the elements up one in the array */
        j--;
        } /* if */
      else
        located = TRUE;
      array_to_sort[j + 1] = current_entry;  /* the insertion */
      } /* for loop j */
   } /* for loop i */
   return;
}
```
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
<details>
<summary>Click to expand. </summary>

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
       the remaining n - i - 1 entries. 
    */
    for (j = last; j > i; j--)  
      if (array_to_sort[j] < array_to_sort[j - 1])
        exchange(array_to_sort[j], array_to_sort[j - 1]);
  return;
}

/* ========== exchange ========== */
/* THE EXCHANGE FUNCTION */
```
The outer (_i_) loop is called _n-1_ times.  However, on the first pass the inner (_j_) loop iterates _n-1_ times; on the second pass it iterates _n-2_ times; and so on. 

$$n-1$$

</details>

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
