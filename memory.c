#include "memory.h"

#pragma region Null Terminated Memory
    memory* reallocg(memory* ptr, uint_32 len) {
        uint_08* newptr = (uint_08*) calloc(len + 1, sizeof(uint_08));
        
        if (newptr != NULL) {
            if (ptr->pointer == NULL) {
                ptr->pointer = newptr;
                return ptr;
            }
            
            memcpy(newptr, ptr->pointer, (len > ptr->length) ? ptr->length : len);
            ptr->length = len;
            free(ptr->pointer);
            ptr->pointer = newptr;
        }
        
        return ptr;
    };
    
    memory* callocg(uint_32 len) {
        memory* ptr = (memory*) calloc(sizeof(memory), sizeof(uint_08));
        ptr->pointer = calloc(len + 1, sizeof(uint_08));
        ptr->length = len;
        return ptr;
    };
    
    memory* mallocg(uint_32 len) {
        memory* ptr = (memory*) calloc(sizeof(memory), sizeof(uint_08));
        ptr->pointer = malloc(len + 1);
        ptr->length = len;
        *((uint_08*)ptr->pointer + len) = 0;
        return ptr;
    };
    
    void freeg(memory* ptr) {
        if (ptr == NULL)
            return;
        if (ptr->pointer != NULL)
            free(ptr->pointer);
        free(ptr);
    };
    
    uint_32 strleng(memory* ptr) {
        return ptr->length;
    };
#pragma endregion
