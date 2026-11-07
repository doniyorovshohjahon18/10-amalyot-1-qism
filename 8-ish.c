
#include <stdio.h>

int main() {
    double son;
    int sanoq = 0;

    printf("2 dan katta son kiriting: ");
    scanf("%lf", &son);

    while (son > 1) {
        son = son / 2;
        sanoq++;
    }

    printf("Bo'linishlar soni = %d\n", sanoq);

    return 0;
}
