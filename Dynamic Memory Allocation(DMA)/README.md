## using #include<stdlib.h>

### malloc() ***used to allocate memory to structure***
*void * malloc(size_t size);*

*ptr = (struct emp* * *) malloc(sizeof(struct emp));*

### calloc() ***used to allocate memory to array***
*void * calloc(size_t n, size_t size)*

where n = size of array and size = size of each element in array

*arr =( int * ) calloc(n, sizeof(int));*

### realloc() ***increase/decrease the size of array***
*(void * ) realloc(void * ptr, size_t size)*

where ptr = address of memory block to resize and size = size of new block either increse or decrese

#### use of realloc()
##### STACK Creation
int capacity = 5 , *stack;

stack =(int * ) calloc(capacity,sizeof(int));

*using calloc() we can't store the 6th element in stack so here we use realloc() for incresing the size of stack*

capacity++

*stack = (void * ) realloc(stack,capacity * sizeof(int));* 

### free() ***use to delete the memory***
