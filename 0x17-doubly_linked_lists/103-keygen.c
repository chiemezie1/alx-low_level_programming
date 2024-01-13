#include <stdio.h>
#include <stdlib.h>

void keygen(char *username) {
    char key[7];
    int i;

    /* ... (existing code) */

    // Use 'i' or another necessary variable in the loop
    for (i = 0; i < 6; i++) {
        key[i] = 'A' + rand() % 26;
    }

    key[6] = '\0';
    printf("%s\n", key);
}

int main(int argc, char **argv) {
    if (argc == 2) {
        keygen(argv[1]);
        return 0;
    } else {
        fprintf(stderr, "Usage: %s <username>\n", argv[0]);
        return 1;
    }
}
