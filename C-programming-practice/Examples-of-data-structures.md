# Examples of data structures, in C
## Arrays (a.k.a. _lists_ or _vectors_)
An __array__ is a data structure consisting of a list of __elements__ of the same type, for example integers, floats, or characters.  A character array is sometimes referred to as a __string__.  An array's length _n_ is fixed, except for in the case of a __dynamic array__, which doubles in length when the number of elements assigned to it has exceeded _n_.  Elements of an array are given by their __index__, or position in the array.  In C, indices begin at 0.  In other languages indices can begin at 1.  An array may be sorted or unsorted.
```c
/* Prompts the user to create an array of digits from 0 to 9 of size ARRAY_SIZE_n 
*/
/* PREAMBLE MATERIAL */
#define ARRAY_SIZE_n 10 /* In this example I've decided n=10. */
int main(void)
{
  /* Local definitions */
  int exampleArray[ARRAY_SIZE_n]; /* Defines the array exampleArray with size ARRAY_SIZE_n */
  int i;
  /* Gather input from the user */
  for (i = 0; i < ARRAY_SIZE_n; i++)
    printf"Enter a digit from 0 to 9"; /* Prompts the user for an entry of the array */
      /* THEN VERIFY THE USER'S INPUT */
    scanf("%d", &exampleArray[i]); /* Assigns the user's input value to exampleArray[i] */
  /* PRINT THE ARRAY */
  return 0;
} /* main */
```
### Pros 
* Constant-time access, as long as the address of an element is known.  
* Efficient storage, since no formatting data or pointers are associated.  
* Memory locality, i.e., elements are next to each other in memory.  
* Unsorted arrays: fast for maintenance (e.g., add, remove) operations. 
### Cons 
* Unsorted arrays: slow for search operations (e.g., successor/predecessor, minimum/maximum). 
<!--### use when:-->
### Big-Oh properties of basic operations (e.g., find, add, remove)
Operation | Unsorted | Sorted
--------- | -------- | ------
Find | _O(n)_ | _O(_ log _n)_
Add | _O(1)_ | _O(n)_
Remove | _O(1)_ | _O(n)_
Successor | _O(n)_ | _O(1)_
Predecessor | _O(n)_ | _O(1)_
Min | _O(n)_ | _O(1)_
Max | _O(n)_ | _O(1)_

__Question:__ Why is deletion _O(1)_ for unsorted lists?

## Linked lists
A __linked list__ is an array with an additional structure, such that each element can have at least one pointer to another element or elements in the array.  In a __singly-linked__ list, each element (besides the last) contains a pointer to the next element in the array.  In a __doubly-linked__ list, each element (besides the first), in addition, has a pointer to its predecessor.  
<!--```c

```
-->
### Pros 
* For large lists, pointers to data are often faster to move and manipulate than the data itself.  
* Insertion and deletion becomes more efficient than for unlinked lists.
<!--### Cons 
*  -->
<!--### use when:-->
### Big-Oh properties of basic operations (e.g., find, add, remove)
(_n_ = no. of elements in the array)

Operation | Unsorted | Sorted
--------- | -------- | ------
Find | _O(n)_ | _O(n)_
Add | _O(1)_ | _O(n)_
Remove | _O(n)_ (singly-); _O(1)_ (doubly-) | _O(n)_ (singly-); _O(1)_ (doubly-)
Successor | _O(n)_ | _O(1)_
Predecessor | _O(n)_ | _O(n)_ (singly-); _O(1)_ (doubly-) 
Min | _O(n)_ | _O(1)_
Max | _O(n)_ | _O(1)_

__Questions:__ 
1. Why isn't the search operation _O(_ log _n)_ for sorted linked lists?
1. Why is deletion _O(n)_ for unsorted singly-linked lists?
1. Why is deletion _O(1)_ for sorted doubly-linked lists?
1. Why is max _O(1)_ for unsorted singly-linked lists?

## Queues
FIFO
## Stacks
LIFO
<!--## Hashtables
## Binary search trees
## Priority queues/ heaps
-->
