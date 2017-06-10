# Examples of data structures, in C
## Arrays (a.k.a. _lists_ or _vectors_)

[comment]: # What it is, also dynamic arrays.
```c
/* Prompts the user to create an array of digits from 0 to 9 of size ARRAY_SIZE */
#define ARRAY_SIZE_n 10 
int main(void)
{
  /* Local definitions */
  int exampleArray[ARRAY_SIZE];
  int i;
  /* Gather input from the user */
  for (i = 0; i < ARRAY_SIZE; i++)
    printf"Enter a digit from 0 to 9"; /* Prompts the user for an entry of the array */
      /* THEN VERIFY THE USER'S INPUT */
    scanf("%d", &exampleArray[i]); /* Assigns the user's input value to the current element in the array */
  /* PRINT THE ARRAY */
  return 0;
} /* main */
```
### Pros 
* Constant-time access, as long as the address of an element is known.  
* Efficient storage, since no formatting data or pointers are associated.  
* Memory locality, i.e., elements are next to each other in memory.  
* Unsorted arrays: fast for maintenance operations 
### Cons 
* Unsorted arrays are slow for search operations. 
### use when:
### Big-Oh properties of basic operations, e.g., find, add, remove
(_n_ = no. of elements in the array)

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
What it is.
```c

```
### Pros 
* 
### Cons 
*  
### use when:
### Big-Oh properties of basic operations, e.g., find, add, remove
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

__Question:__ Why isn't the search operation _O(_ log _n)_ for sorted linked lists?

__Question:__ Why is deletion _O(n)_ for unsorted singly-linked lists?

__Question:__ Why is deletion _O(1)_ for sorted doubly-linked lists?

__Question:__ Why is max _O(1)_ for unsorted singly-linked lists?

## Queues
FIFO
## Stacks
LIFO
## Hashtables
## Binary search trees
## Priority queues/ heaps
