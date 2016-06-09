#ifndef C_MEMORY
#define C_MEMORY
    #include <stdlib.h>
    #include <string.h>
    
    typedef size_t uint_32;
    typedef unsigned char uint_08;
    
    typedef struct c_memory {
        uint_32 length;
        uint_08* pointer;
    } memory;

    memory* reallocg(memory* ptr, uint_32 len);
    memory* callocg(uint_32 len);
    memory* mallocg(uint_32 len);
    uint_32 strleng(memory* ptr);
    void freeg(memory* ptr);
#endif
