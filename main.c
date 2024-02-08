#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int sum = 0;
    int n = 5;
    for ( sum = 0, i = 1; i <=n; ++i )
        sum += i;
    printf("Counting to 10!");
    printf("Done counting!");
    return 0;
}
