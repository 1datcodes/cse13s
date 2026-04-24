#include <stdio.h>

/*
 * Function:    mystrlen()
 * Purpose:     Return the length of the string s.
 * Parameters:  s -- a pointer (address) to string
 * Example:     mystrlen("abc") should be 3
 */
int mystrlen(char *s) {
    int length = 0;
    while (s[length] != '\0') {
        length = length + 1;
        // Other ways
        //length += 1;
        //length ++;
        //++length;
    }

    // another way
    //while (s[length] != 0) {
    //    ++length;
    //}

    return length;
}

int main(void) {
    char s[4] = "abc";
    char t[8] = "abc";
    char u[] = "abc";

    printf("mystrlen(s) is %d\n", mystrlen(s));
    printf("mystrlen(t) is %d\n", mystrlen(t));
    printf("mystrlen(u) is %d\n", mystrlen(u));

    printf("mystrlen(s + 1) is %d\n", mystrlen(s + 1));
    printf("mystrlen(&s[1]) is %d\n", mystrlen(&s[1]));

    printf("sizeof(s) is %d\n", (int) sizeof(s));
    printf("sizeof(t) is %d\n", (int) sizeof(t));
    printf("sizeof(u) is %d\n", (int) sizeof(u));
    return 0;
}
