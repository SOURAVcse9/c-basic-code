#include <stdio.h>

int main() {

    int sum = 0;
    int n;

    for (int i = 0; i < 10; i++)
        {

        scanf("%d", &n);

        if (n > 0)
        {


            sum +=n;
        }

        if (sum > 999)
            break;
    }

    printf("Sum of positive values: %d\n", sum);

    return 0;
}
