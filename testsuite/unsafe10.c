#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct s {
    int val;
    struct s* ptr;
};

int main() {
    struct s* x = malloc(sizeof(struct s));

    x->ptr = x;
    // val was not initialized
    printf("%i\n", x->ptr->ptr->ptr->ptr->ptr->val);
    free(x);
    return 0;
}