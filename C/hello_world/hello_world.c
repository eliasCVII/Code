#include <stdio.h>
#include <stdlib.h>

int main(void) { /* main function of the program */
    if (printf("%s\n", "Helol") == EOF) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
    // this is a comment
    /* this is another comment */
}
