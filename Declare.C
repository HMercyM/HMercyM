// program to declare,initialize and print 
#include <stdio.h>

int main() {
    int a[3][3][2] = {{{2,3}, {5,8}, {4,9}},
                      {{1,4}, {6,8}, {3,9}},
                      {{2,5}, {7,4}, {5,8}}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d %d %d\n", a[i][j][k]);
            }
        }
    }

    return 0;
}