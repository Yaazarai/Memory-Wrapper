# Memory Wrapper
Null-terminated and zero'd out memory container for C. The container keeps track of both the pointer and the length of the pointer. The extra null-byte at the end of the memory sequence is for when you need to pass the pointer to a function where null-termination is required to avoid undefined results. A good example of this is with strings via `strlen()` in `<string.h>`.
```C
// Aliased Types
typedef size_t uint_32;
typedef unsigned char uint_08;

// Memory Container.
typedef struct c_memory {
    uint_32 length;
    uint_08* pointer;
} memory;

/// == Memory Allocation ==
// Allocates a new memory container with zero'd memory.
memory* callocg(uint_32 length);
// Allocates a new non-zero'd memory container.
memory* mallocg(uint_32 length);
// Reallocates a memory container to the new length.
memory* reallocg(memory* ptr, uint_32 length);
// Frees a memory container.
void freeg(memory* ptr);
// Gets the length of the memory container.
uint_32 strleng(memory* ptr);
```
