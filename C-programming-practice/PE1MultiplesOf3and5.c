/* Project Euclid no. 1: Multiples of 3 and 5
	If we list all the natural numbers below 10 that are multiples of 
	3 or 5, we get 3, 5, 6, and 9.  The sum of these multiples is 23.
	Find the sum of all the multiples of 3 or 5 below 1000 (or n).
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define THE_VALUE_n 10

/* Prototype Declarations */
	/* (i.e., these are functions/macros I have defined) */
int strictlyBelow_n (int x, int y);
int sumOfAllMultiples (int x, int y);

int main (void)
{
/* Local Definitions */
	int n = THE_VALUE_n;
	int noOfThrees;
	int noOfFives;
	int noOfFifteens;
	int sumThrees;
	int sumFives;
	int sumFifteens;
	int theAnswer;

/* Statements */	
	/* States the problem */
		printf("===== Project Euclid no.1 =====\n");
		/**/
		printf("\nIf we list all the natural numbers below 10 that are\n");
		printf("multiples of 3 or 5, we get 3, 5, 6, and 9.  The sum of\n");
		printf("these multiples is 23.\n");
		/**/
		printf("\nFind the sum of all the multiples of 3 or 5 below\n");
		printf("%d (or below any natural number n).\n", n);
		/**/
		printf("\n===============\n");
		/**/
	/* Checks input */
		if (n < 0)
			{
			n = 1000;	
			printf("\nLet n=%d.\n", n);			
			}
	/* Solves the problem */
		noOfThrees = strictlyBelow_n(3,n);
		noOfFives = strictlyBelow_n(5,n);
		noOfFifteens = strictlyBelow_n(15,n);
		sumThrees = sumOfAllMultiples(3,noOfThrees);
		sumFives = sumOfAllMultiples(5,noOfFives);
		sumFifteens = sumOfAllMultiples(15,noOfFifteens);		
		theAnswer = sumThrees + sumFives - sumFifteens; 
	/* Gives the answer */
		printf("\nAnswer: %d\n", theAnswer);
		printf("Big-O: Quadratic\n");
	/* Explains solution */
		printf("\n===== Explanation =====\n\n");
		/**/
		printf("First add up the multiples of 3 by using a modified\n");
		printf("floor function, since the problem states the\n");
		printf("numbers must be strictly less than %d.  In this case\n", n);printf("there are %d multiples of 3 below %d.\n", noOfThrees, n);
		printf("Their total is given by the binomial coefficient \n");
		printf("%d choose 2, multiplied by 3, which is \n", noOfThrees+1);
		printf("%d.\n", sumThrees);
		/**/
		printf("\nSimilarly, there are %d multiples of 5\n", noOfFives);
		printf("below %d, and their sum is %d.\n", n, sumFives);
		/**/
		printf("\nUnfortunately it is not enough to just combine\n");
		printf("these values, otherwise those divisible by both 3\n"); printf("and 5 will get counted twice (Inclusion-Exclusion\n"); printf("Principle).  We must subtract the %d\n", noOfFifteens);
		printf("multiples of 15, whose sum is %d.\n", sumFifteens); 
		printf("So the answer is ");
		printf("%d + %d - %d = ", sumThrees, sumFives, sumFifteens);
		printf("%d.\n", theAnswer);
	return 0;
} /* main */



/* ======== strictlyBelow_n ========
	Modified floor function.  Ensures the output is strictly less than y/x.
*/
int strictlyBelow_n (int x, int y)
{
/* Local Definitions */
	int modifiedFloor = floor(y/x);
/* Statements */	
	/* Check the floor */
		if (x*modifiedFloor == y && y>0)
			modifiedFloor--;
	/* Returns: */
		return modifiedFloor;
} /*strictlyBelow_n */


/* ======== sumOfAllMultiples ========
	Returns the sum of all positive multiples of x that are strictly less than y.  
*/
int sumOfAllMultiples (int x, int y)
{
/* Local Definitions */
/* Statements */	
	/* Checks input is valid */
	/* Returns: */
		return x*y*(y+1)/2;
} /*strictlyBelow_n */
