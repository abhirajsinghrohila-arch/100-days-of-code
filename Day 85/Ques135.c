//Q135: Enum with explicit values starting from 10
#include <stdio.h>

enum Numbers {
    FIRST = 10,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
};

int main() {
    printf("Enum values starting from 10:\n");
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);
    printf("FIFTH = %d\n", FIFTH);
    
    return 0;
}