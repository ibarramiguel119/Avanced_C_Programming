#include <stdio.h>

int main() {
    // Define an array of pointers to strings
    const char *strings[] = {
        "Hello, World!",
        "C Programming",
        "Arrays of Pointers",
        "Example Code",
        "End of Example"
    };

    // Determine the number of elements in the array
    int num_elements = sizeof(strings) / sizeof(strings[0]);

    // Print each string using the array of pointers
    for (int i = 0; i < num_elements; i++) {
        printf("strings[%d]: %s\n", i, strings[i]);
    }

    return 0;
}