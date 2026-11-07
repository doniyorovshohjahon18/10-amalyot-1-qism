
#include <stdio.h>
#include <math.h>

int main() {
    int i = 1;
    double kvadrat;

    while (i <= 10) {
        kvadrat = pow(i, 3);

        printf("%d = %.0f\n", i, kvadrat);

        i++;
    }

    return 0;
}
