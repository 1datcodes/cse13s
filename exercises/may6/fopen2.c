#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fin = fopen("infile.txt", "r");
    FILE *fout = fopen("outfile.txt", "w");

    if (fin == NULL) {
        printf("Error! Can't open input file!\n");
    }

    if (fout == NULL) {
        printf("Error! Can't open output file!\n");
    }

    while(1) {
        int ch = fgetc(fin);

        if (ch == EOF) break;

        if (islower(ch)) {
            int delta = 'A' - 'a'; // make the char uppercase
            ch += delta;
        }

        fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);

    return 0;
}
