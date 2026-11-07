
#include <stdio.h>
#include <math.h>

int main() {

    int num = 1, num2, res = 0;

    printf("Son kiriting: ");
    scanf("%d", &num2);

    while (num <= num2) {
        res += num;
        num++;
    }
    printf("%d ", res);

    return 0;
}
