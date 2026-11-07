// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int password;

    while (1) {
        printf("Parol kiritng: ");
        scanf("%d", &password);
        if (password == 1234) {
            printf("Xush kelibsiz!");
            break;
        } else {
            printf("Parol noto'g'ri\n");
        }
    }
    
    return 0;
}