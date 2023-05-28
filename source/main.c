#include <stdio.h>
#include <stdlib.h>
#include <vec.h>

int main()
{
    struct ArrayVector *numbers = vec_new();

    vec_add(numbers, 4);
    vec_print(numbers);
    vec_add(numbers, 6);
    vec_print(numbers);

    vec_free(numbers);

    return 0;
}