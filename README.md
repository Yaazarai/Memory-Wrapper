# null-terminated-memory
Null-terminated and zero'd out memory container for C. The container keeps track of both the point and the length of the pointer.
```C
// Memory Container.
typedef struct c_memory {
 unsigned int length;
 unsigned char* pointer;
} memory;

// Memory Allocation.
memory* callocg(unsigned int length);
```
