#include <stdio.h>
#define LEN 10

int main() {
    char carr[] = {[2] = 'P', 'H', 'I', [3] = 'S'};

    printf("Array besteht aus %d Elementen.\n", sizeof(carr)/sizeof(carr[0]));
    return 0;
}
