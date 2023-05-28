#include <stdio.h>
#include <stdlib.h>
#include <vec.h>

struct ArrayVector *vec_new()
{
    struct ArrayVector *vec = malloc(sizeof(struct ArrayVector) * 1);
    vec->size = 0;
    vec->capacity = 2;
    vec->array = malloc(sizeof(int) * 2);
    return vec;
}

void vec_free(struct ArrayVector *vec)
{
    vec->size = 0;
    vec->capacity = 0;
    free(vec->array);
    free(vec);
}

void vec_add(struct ArrayVector *vec, int number)
{
    if (vec->size == vec->capacity)
    {
        vec->capacity = vec->capacity * 2;
        vec->array = realloc(vec->array, sizeof(int) * vec->capacity);
    }
    vec->array[vec->size] = number;
    vec->size = vec->size + 1;
}

void vec_print(struct ArrayVector *vec)
{
    for (int i = 0; i < vec->size; i++)
    {
        printf("%d, ", vec->array[i]);
    }
    printf("\n");
}