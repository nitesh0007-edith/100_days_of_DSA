## using #include<stdlib.h>

### malloc() ***used to allocate memory to structure***
*void * malloc(size_t size);*

*ptr = (struct emp* * *) malloc(sizeof(struct emp));*

### calloc() ***used to allocate memory to array***
*void * calloc(size_t n, size_t size)*

where n = size of array and size = size of each element in array
### realloc() ***increase/decrease the size of array***
### free() ***use to delete the memory***
