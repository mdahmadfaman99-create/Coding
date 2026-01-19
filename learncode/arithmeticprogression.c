#include <stdio.h>

int main() {
    int n, i;
    float a, d;
    float term;

    printf("Enter first term (a) of AP = ");
    scanf("%f", &a);

    printf("Enter the common difference (d) of AP = ");
    scanf("%f", &d);

    printf("Enter the number of terms (n) = ");
    scanf("%d", &n); 

    term = a;
    printf("\nAP series:\n");

    for (i = 1; i <= n; i++) {
        printf("%f ", term);
        term = term + d;
    }

    return 0;
}
