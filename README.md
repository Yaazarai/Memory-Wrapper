# null-terminated-memory
Null-terminated and zero'd out memory for C.

The following functions add a null-terminated element to the end of the newly allocated memory.
- reallocg(ptr, size)
 - allocates zero'd memory, then copy's the old memory into the new memory.
- callocg(size)
 - allocates memory with all elements zero'd out.
 - does not take (count, size) args like calloc().
- mallocg(size)
 - allocates memory without zeroing out elements.
