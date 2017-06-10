## Examples of data structures

* array list/vector
```c
/* Prompts the user to create an array of digits from 0 to 9 of size ARRAY_SIZE */
#define ARRAY_SIZE_n 10
int main(void)
{
int exampleArray[ARRAY_SIZE];
int i;
for (i = 0; i < ARRAY_SIZE; i++)
  printf"Enter a digit from 0 to 9"; 
    /* THEN VERIFY THE USER'S INPUT */
  scanf("&d", &exampleArray[i]);
/* PRINT THE ARRAY */
  return 0;
} /* main */
```
