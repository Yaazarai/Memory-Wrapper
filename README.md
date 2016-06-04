# null-terminated-memory
Null-terminated and zero'd out memory for C.

To ensure null-termination do not use memory not allocated with mallocg() or callocg() with this function.
- reallocg(ptr, size)
 - allocates zero'd memory, then copy's the old memory into the new memory.

The following functiosn add a null-terminated element to the end of the newly allocated memory.
- callocg(size)
 - allocates memory with all elements zero'd out.
 - does not take (count, size) args like calloc().
- mallocg(size)
 - allocates memory without zeroing out elements.
