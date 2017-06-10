## Examples of data structures, in C
### Arrays (a.k.a. _lists_ or _vectors_)
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
* Pros: Constant-time access, as long as the address of an element is known.  Efficient storage, since no formatting data or pointers are associated.  Memory locality, i.e., elements are next to each other in memory.  Unsorted arrays are fast for maintenance operations 
* Cons: Unsorted arrays are slow for search operations. 
* use when:
* big-Oh properties of basic operations, e.g., find, add, remove

Also: dynamic arrays
### Linked lists
### Queues
FIFO
### Stacks
LIFO
### Hashtables
### Binary search trees
### Priority queues/ heaps
