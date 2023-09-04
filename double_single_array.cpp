#include <stdio.h>

void print_hype_array(int *text) {
    for (int y = 0; y < *text; y++, printf("\n")) {
        for(int x = 2; x < *(text + 1); x++) {
            printf("%d ", *(text + y * *(text + 1) + x));
        }
    }
}
int main(void) {
    int text[] = {
        3,5,
        10, 20, 30, 40, 50,
        50, 60, 70, 80, 90,
        11, 12, 13, 14, 15
    };
    print_hype_array(text);

}