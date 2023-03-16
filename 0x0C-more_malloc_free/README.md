#  C - More malloc, free
---

### [0. Trust no one](./0-malloc_checked.c)
* A function that allocates memory using malloc.
	- Prototype: void *malloc_checked(unsigned int b);
	- Returns a pointer to the allocated memory
	- If malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.


### [1. string_nconcat](./1-string_nconcat.c)
* A function that concatenates two strings.
	- Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
	- The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
	- If the function fails, it should return NULL
	- If n is greater or equal to the length of s2 then use the entire string s2
	- If NULL is passed, treat it as an empty string


### [2. _calloc](./2-calloc.c)
* A function that allocates memory for an array, using malloc.
	- Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
	- The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
	- The memory is set to zero
	- If nmemb or size is 0, then _calloc returns NULL
	- If malloc fails, then _calloc returns NULL.


### [3. array_range](./3-array_range.c)
* A function that creates an array of integers.
	- Prototype: int *array_range(int min, int max);
	- The array created should contain all the values from min (included) to max (included), ordered from min to max
	- Return: the pointer to the newly created array
	- If min > max, return NULL
	- If malloc fails, return NULL


### [4. ](./4-free_grid.c)
* A function that frees a 2 dimensional grid previously created by your alloc_grid function.


### [5. ](./100-argstostr.c)
* A function that concatenates all the arguments of your program.


---
