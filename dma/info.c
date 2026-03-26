/*
C si a language with some fixed rules of programming. For example: Changing the size of an array is not allowed.

Dynamic Memory Allocation
Dynamic memory allocation is a way to allocate memory to a data structure during the runtime.
We can use DMA functions availabe in C to allocate and free memory during runtime.

functions for DMA in C
Following functions are available in C to perform dynamic memory allocation:

1. malloc()
2. calloc()
3. free()
4. realloc()

1. malloc() function
malloc stands for memory allocation. It takes number of bytes to be allocated as an input and returns a pointer of type void.

Syntex:
ptr = (int *)malloc(30*sizeof(int)) // it will allocate memory in heap

2. calloc() function
calloc stands for continuous allocation.
It initializes each memory block with a default value of 0.

Syntex:
ptr=(float *)calloc(30, sizeof(float));
//allocates contiguous space in memory for 30 blocks (floats)

If the space is not sufficient memory allocation fails and a NULL pointer is returned.

3. free() function
We can use free() function to deallocate the memory.
The momory allocated using calloc/malloc is not deallocated automatically.

Syntex:
free(ptr); //memory of ptr is released

realloc() function
Sometimes the dynamically allocated memory is insufficient or more than required.

realloc is used to allocate memory of new size using the previous pointer and size.
Syntex
ptr = realloc(ptr, newSize);
ptr = realloc(ptr, 3*sizeof(int));
//ptr now points to this new block of memory capable of storing 3 integers
*/