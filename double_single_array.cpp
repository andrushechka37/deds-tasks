#include <stdio.h>
// it works with single array like it is double; first arguments are parametres of the array

int getter(int *text, int index_x, int index_y) {
    return *(text + 2 + index_y * *(text + 1) + index_x);
}
void print_hype_array(int *text) {
    for (int y = 0; y < *text; y++, printf("\n")) {
        for(int x = 0; x < *(text + 1); x++) {
            printf("%d ", getter(text, x, y));
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
