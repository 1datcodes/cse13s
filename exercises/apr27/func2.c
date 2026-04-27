#include <stdio.h>

void func(char *s) {
    // s is going to be an address to the first character of the string
    // in case the string is too big
    printf("%c\n", s[0]); // but we didn't get an array --> C converts
                          // array and pointers so long as the data types
                          // match
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);

    // actually using the pointer
    printf("%c\n", *s); // only prints 'a' since the pointer is to the
                        // first char
    
    printf("%s\n", s); // this will print the entire string
}

int main(void) {
    func("abc");
    return 0;
}
