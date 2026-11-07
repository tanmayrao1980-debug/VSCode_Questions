#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int mid = n / 2;

    for (int i = 1; i <= mid + 1; i++) {

        // Print left wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Print central spaces
        for (int j = 1; j <= 2 * (mid - i + 1); j++) {
            printf(" ");
        }

        // Print right wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = mid; i >= 1; i--) {

        // Print left wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Print central spaces
        for (int j = 1; j <= 2 * (mid - i + 1); j++) {
            printf(" ");
        }

        // Print right wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}