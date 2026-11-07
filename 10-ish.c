#include <stdio.h>

int main() {
    int parol = 1234;
    int parol_kiriting = 0;

    while (parol_kiriting != parol) {
        printf("Parolni kiriting: ");
        scanf("%d", &parol_kiriting);
        
        if (parol_kiriting != parol) {
            printf("Parol xato qayta kiriting.\n");
        }
    }

    printf("Xush kelibsiz!\n");
    return 0;
}
