#include "app.h"

int main() {
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        str[strcspn(str, "\n")] = '\0'; 
    }

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("Not a palindrome\n");
    } else {
        printf("Is a palindrome\n");
    }

    return 0;
}
