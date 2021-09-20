# Lab04 Instructions
https://web.cs.kent.edu/~mislam4/cs1/Labs/Lab4/
## Scientific calculator
1. Learn some predefined math funcs.
2. Use a while loop and switch statement to determine which predefined functions to call

## Guess Troll's Age
1. Usage On `rand()` and `srand()`\
https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/\
*If random numbers are generated with rand() without first calling srand(), your program will create the same sequence of numbers each time it runs.*
```
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// This program will create same sequence of
	// random numbers on every program run

	for(int i = 0; i<5; i++)
		printf(" %d ", rand());

	return 0;
}
```
Reason: The srand() function sets the starting point for producing a series of pseudo-random integers. If srand() is not called, the rand() seed is set as if srand(1) were called at program start. Any other value for seed sets the generator to a different starting point.
2. While loop and If-else statment to determine if the guessed age is correct.

