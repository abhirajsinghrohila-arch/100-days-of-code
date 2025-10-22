//Q22: Compute profit or loss percentage based on cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (costPrice <= 0) {
        printf("Invalid Cost Price! It should be greater than 0.\n");
        return 1;
    }

    float diff = sellingPrice - costPrice;

    if (diff > 0) {
        printf("Profit Percentage = %.2f%%\n", (diff / costPrice) * 100);
    } else if (diff < 0) {
        printf("Loss Percentage = %.2f%%\n", (-diff / costPrice) * 100);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
