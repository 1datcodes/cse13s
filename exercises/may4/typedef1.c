#include <stdio.h>
typedef int MYTYPE;
//      double MYTYPE; <-- variable declaration

void mytype_print(MYTYPE v) {
    printf("%d\n", v);
}

int main(void) {
    MYTYPE var1, var2;

    var1 = 1;
    var2 = 2;

    mytype_print(var1);
    mytype_print(var2);

    return 0;
}
