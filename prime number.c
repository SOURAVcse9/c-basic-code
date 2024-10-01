#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Prime numbers less than %d are:\n", N);

    for (i = 2; i < N; i++) {
        for (j = 2; j < i; ++j) {
            if (i % j == 0)
                break;
        }

        if (j == i)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
