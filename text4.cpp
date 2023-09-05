#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// stores the massive of pointers
int main(void) {
    char *text[] = {0};
    int s = 0;
    scanf("%d\n", &s);
    int const len = s;
    char buffer[100] = {0};
    for (int i = 0; i < s; i++) {
        fgets(buffer, 100, stdin);
        char * pointer = (char *) calloc(strlen(buffer) + 1, 1);
        strcpy(pointer, buffer);
        text[i] = pointer;
    }
    for (int i = 0; i < s; i++) {
        puts(text[i]);
    }

    for(int i = 0; i < s; i++)
        free(text[i]);
    return 0;

}
