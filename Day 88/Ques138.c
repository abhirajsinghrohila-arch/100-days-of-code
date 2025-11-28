//Q138: Print all enum names and values using loop
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};

int main() {
    printf("Enum Color values:\n");
    
    for (int i = RED; i <= ORANGE; i++) {
        printf("Color %d: ", i);
        
        switch(i) {
            case RED:
                printf("RED\n");
                break;
            case GREEN:
                printf("GREEN\n");
                break;
            case BLUE:
                printf("BLUE\n");
                break;
            case YELLOW:
                printf("YELLOW\n");
                break;
            case ORANGE:
                printf("ORANGE\n");
                break;
        }
    }
    
    return 0;
}