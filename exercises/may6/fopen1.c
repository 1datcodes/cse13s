#include <stdio.h>

int main(void) {
    FILE *f = fopen("infile.txt", "r");

    if (f == NULL) {
        printf("Error!\n");
    }

    while(1) {
        int ch = fgetc(f);

        if (ch == EOF) break;

        printf("%c", ch);
    }

    printf("\n");

    fclose(f);

    return 0;
}
