#include "app.h"

// 29 task
#define MAX_LEN 256
#define MAX_WORDS 50

int main() {
    char src[MAX_LEN];
    char dest[MAX_LEN] = "";
    char *words[MAX_WORDS];
    int count = 0, i;

    printf("Enter sentence: ");
    if (fgets(src, sizeof(src), stdin) != NULL) {
        src[strcspn(src, "\n")] = '\0';
    }

    char *token = strtok(src, " ");
    while (token != NULL && count < MAX_WORDS) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    for (i = count - 1; i >= 0; i--) {
        strcat(dest, words[i]);
        if (i > 0) {
            strcat(dest, " ");
        }
    }

    printf("Reversed sentence: %s\n", dest);

    return 0;
}
