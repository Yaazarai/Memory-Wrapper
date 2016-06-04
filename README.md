# null-terminated-memory
Null-terminated and zero'd out memory container for C. The container keeps track of both the point and the length of the pointer.
```C
// Memory Container.
typedef struct c_memory {
 unsigned int length;
 unsigned char* pointer;
} memory;

/// == Memory Allocation ==
// Allocates a new memory container with zero'd memory.
memory* callocg(unsigned int length);
// Allocates a new non-zero'd memory container.
memory* mallocg(unsigned int length);
// Reallocates a memory container to the new length.
memory* reallocg(memory* ptr, unsigned int length);
// Frees a memory container.
void freeg(memory* ptr);
// Gets the length of the memory container.
unsigned int strleng(memory* ptr);
```
