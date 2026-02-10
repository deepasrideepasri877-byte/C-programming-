#include <stdio.h>

int main() {
    int n, k, a, b;
    int max_and = 0, max_or = 0, max_xor = 0;

    scanf("%d %d", &n, &k);

    for (a = 1; a <= n; a++) {
        for (b = a + 1; b <= n; b++) {

            if ((a & b) < k && (a & b) > max_and)
                max_and = a & b;

            if ((a | b) < k && (a | b) > max_or)
                max_or = a | b;

            if ((a ^ b) < k && (a ^ b) > max_xor)
                max_xor = a ^ b;
        }
    }

    printf("%d\n%d\n%d", max_and, max_or, max_xor);
    return 0;
}
