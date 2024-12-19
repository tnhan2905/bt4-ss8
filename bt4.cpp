#include <stdio.h>

int main() {
    int mang[3][3] = {
        {6, 1, 10},
        {1, 8, 3},
        {7, 3, 9}
    };
    int max = mang[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (mang[i][j] > max)
                max = mang[i][j];
    printf("Phan tu lon nhat: %d\n", max);
    return 0;
}
