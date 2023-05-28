#ifndef VEC_HEADER
#define VEC_HEADER

// A Vector is a dymanic array
struct ArrayVector
{
    int *array;
    // How many elements can we put inside?
    unsigned long capacity;
    // How many elements do we have inside?
    unsigned long size;
};

// Creates a new ArrayVector
struct ArrayVector *vec_new();
// Frees an allocated ArrayVector
void vec_free(struct ArrayVector *vec);
// Adds new numbers to the ArrayVector
void vec_add(struct ArrayVector *vec, int num);
// Prints all the elements of the Array Vector
void vec_print(struct ArrayVector *vec);

#endif